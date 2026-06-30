#include <stdio.h>

int main() {
    int n, i, j, max_count = 0, max_element;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++) {
        int count = 0;
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > max_count) {
            max_count = count;
            max_element = arr[i];
        }
    }
    
    printf("Element with maximum frequency = %d (Appeared %d times)\n", max_element, max_count);
    
    return 0;
}