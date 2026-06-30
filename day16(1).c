#include <stdio.h>

int main() {
    int n, i, total_sum, actual_sum = 0;
    printf("Enter the size of the array (N-1): ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d distinct elements from 1 to %d:\n", n, n + 1);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actual_sum += arr[i];
    }
    
    total_sum = ((n + 1) * (n + 2)) / 2;
    printf("Missing number = %d\n", total_sum - actual_sum);
    
    return 0;
}