#include<stdio.h>
void knapsack(int n, float weight[], float profit[], float capacity) {
    float x[20], total_profit=0;

    for(int i=0; i<n; i++) {
        x[i]= 0.0;
    }

    for(int i=0; i<n; i++) {
        if(weight[i]<=capacity) {
            x[i]= 1.0;
            total_profit += profit[i];
            capacity -= weight[i];
        } else {
            x[i]= capacity/weight[i];
            total_profit += x[i]*profit[i];
            break; // capacity used up
        }
    }

    printf("The result vector:\n");
    for(int i=0; i<n; i++) {
        printf("%.2f\t", x[i]);
    }

    printf("\nMaximum profit: %.2f\n", total_profit);
}

int main() {
    float weight[20], profit[20], capacity;
    int n;
    float ratio[20];

    printf("Enter the number of objects: ");
    scanf("%d", &n);
    printf("Enter the weight & profit of each object:\n");
    for(int i=0; i<n; i++) {
        scanf("%f %f", &weight[i], &profit[i]);
    }

    printf("Enter the capacity of knapsack: ");
    scanf("%f", &capacity);

    // Calculate profit/weight ratio
    for(int i=0; i<n; i++) {
        ratio[i]= profit[i]/weight[i];
    }

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(ratio[i]<ratio[j]) {
                // Swap ratio
                float temp= ratio[i];
                ratio[i]= ratio[j];
                ratio[j]= temp;
                // Swap weighy
                temp= weight[i];
                weight[i]= weight[j];
                weight[j]= temp;
                // Swap profit
                temp= profit[i];
                profit[i]= profit[j];
                profit[j]= temp;
            }
        }
    }

    knapsack(n, weight, profit, capacity);
    return 0;
}

