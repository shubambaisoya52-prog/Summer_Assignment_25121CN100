#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, max, sec_max;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    max = INT_MIN;
    sec_max = INT_MIN;
    
    for(i = 0; i < n; i++) {
        if(arr[i] > max) {
            sec_max = max;
            max = arr[i];
        } else if(arr[i] > sec_max && arr[i] != max) {
            sec_max = arr[i];
        }
    }
    
    if(sec_max == INT_MIN) {
        printf("There is no second largest element\n");
    } else {
        printf("Second largest element = %d\n", sec_max);
    }
    
    return 0;
}