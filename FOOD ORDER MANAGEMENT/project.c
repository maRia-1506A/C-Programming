// #include<stdio.h>
// #include<string.h>

// void signup();

// int main() {
//     signup();
//     return 0;
// }


#include<stdio.h>
#include<string.h>

//structure details
struct Details{
    char username[100];
    char password1[100];
    char password2[100];
    char email[100]; 
    char mobile[50];
};

void signup();
void login();
void exitProgram(); // Renamed 'exit' to avoid conflict with built-in exit()

int main() {
    int choice;
    printf("\n\nWelcome to HabiJabi Food Corner\n\n");
    while(1) {
        printf("\n1. Signup\n2. Login\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Fixes input issue

        switch (choice)
        {
        case 1:
            signup();
            break;
        case 2:
            login();
            break;
        case 3:
            exitProgram();
            return 0;
        default:
            printf("\nChoice is invalid\n");
            break;
        }
    }
}

//sign up function
void signup() {
    FILE *file;
    file= fopen("order.txt", "a");
    if(file==NULL) {
        printf("File is not available\n");
    } else {
        struct Details sign;
        printf("\n\nSign Up\n\n");
        fflush(stdin);
        printf("Enter your username: ");
        fgets(sign.username, sizeof(sign.username), stdin);
        printf("Enter your email: ");
        fgets(sign.email, sizeof(sign.email), stdin);
        printf("Enter your mobile number: ");
        fgets(sign.mobile, sizeof(sign.mobile), stdin);

        while(1){
            fflush(stdin);
            printf("Enter your password: ");
            fgets(sign.password1, sizeof(sign.password1), stdin);    

            if(strlen(sign.password1) < 6) {
                printf("Your password should be more than 6 digits\n");
                continue;
            } else {
                printf("Confirm Password: ");
                fgets(sign.password2, sizeof(sign.password2), stdin);

                if(strcmp(sign.password1, sign.password2) == 0) {
                    break;
                } else {
                    printf("Password doesn't match\n");
                    continue;
                }
            }
        }

        fprintf(file, "%s%s%s%s", sign.username, sign.email, sign.mobile, sign.password1);
        fclose(file);
    }
}

//login function
void login() {
    char login_username[100];
    char login_password[100];

    struct Details log;
    FILE *file;
    file= fopen("order.txt", "r");
    if(file==NULL) {
        printf("File is not available\n");
        return;
    }

    fflush(stdin);
    printf("Username: ");
    fgets(login_username, sizeof login_username, stdin);
    printf("Password: "); 
    fgets(login_password, sizeof login_password, stdin);

    // Fix: Removing newline character from inputs
    login_username[strcspn(login_username, "\n")] = '\0';
    login_password[strcspn(login_password, "\n")] = '\0';

    int found=0; //initially found nothing

    while(fscanf(file, " %[^\n] %[^\n] %[^\n] %[^\n]", log.username, log.email, log.mobile, log.password1) != EOF) {
        log.username[strcspn(log.username, "\n")] = '\0';
        log.password1[strcspn(log.password1, "\n")] = '\0';

        if(strcmp(log.username, login_username) == 0 && strcmp(log.password1, login_password) == 0) {
            found = 1;
            break;
        }
    }
    fclose(file);

    if(found) {
        printf("Welcome to Homepage\n");
    } else {
        printf("Invalid username or password\n");
    }
}

//exit function
void exitProgram() {
    printf("Exiting...\n");
}