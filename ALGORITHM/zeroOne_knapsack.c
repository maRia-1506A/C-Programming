#include <stdio.h> 
 
#define MAX_ITEMS 100 
 
int max(int a, int b) { 
    return (a > b) ? a : b; 
} 
 
int knapsack(int values[], int weights[], int n, int capacity) { 
    int dp[MAX_ITEMS + 1][capacity + 1]; 
 
    for (int i = 0; i <= n; i++) { 
        for (int w = 0; w <= capacity; w++) { 
            if (i == 0 || w == 0) { 
                dp[i][w] = 0; 
            } else if (weights[i - 1] <= w) { 
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]); 
            } else { 
                dp[i][w] = dp[i - 1][w]; 
            } 
        } 
    } 
 
    return dp[n][capacity]; 
} 
 
int main() { 
    int n, capacity; 
 
    printf("Enter the number of items: "); 
    scanf("%d", &n); 
 
    int values[MAX_ITEMS], weights[MAX_ITEMS]; 
 
    printf("Enter the values of items:\n"); 
    for (int i = 0; i < n; i++) { 
        scanf("%d", &values[i]); 
    } 
 
    printf("Enter the weights of items:\n"); 
    for (int i = 0; i < n; i++) { 
        scanf("%d", &weights[i]); 
    }   printf("Enter the capacity of the knapsack: "); 
    scanf("%d", &capacity); 
 
    int result = knapsack(values, weights, n, capacity); 
 
    printf("Maximum value in the knapsack: %d\n", result); 
 
    return 0; 
} 