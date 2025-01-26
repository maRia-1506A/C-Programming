//sum & avg of array
#include<stdio.h>
int main() {
    int number[5], sum=0;
    float avg;
    for(int index=0; index<5; index++) {
        printf("number[%d]: ", index);
        scanf("%d", &number[index]); 
    }

    for(int index=0; index<5; index++) {
        sum= sum + number[index];
    }
    printf("SUM: %d\n", sum);
    printf("AVERAGE: %.2f\n", avg= (float)sum/5);

    return 0;
}


//sum & avg of math marks
#include<stdio.h>
int main() {
    int student[5], sum= 0;
    float avg;

    for(int i=0; i<5; i++) {
        printf("Math mark for student[%d]: ", i+1);
        scanf("%d", &student[i]);
    }
    for(int i=0; i<5; i++) {
        sum= sum + student[i];
    }
    avg= (float)sum/5;
    printf("The sum: %d\n", sum);
    printf("The average: %.2f\n", avg);
    
    return 0;
}
