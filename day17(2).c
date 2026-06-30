#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0, exists;
    printf("Enter the number of elements for first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements for second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int union_arr[n1 + n2];
    for(i = 0; i < n1; i++) {
        exists = 0;
        for(j = 0; j < k; j++) {
            if(union_arr[j] == arr1[i]) {
                exists = 1;
                break;
            }
        }
        if(!exists) {
            union_arr[k++] = arr1[i];
        }
    }

    for(i = 0; i < n2; i++) {
        exists = 0;
        for(j = 0; j < k; j++) {
            if(union_arr[j] == arr2[i]) {
                exists = 1;
                break;
            }
        }
        if(!exists) {
            union_arr[k++] = arr2[i];
        }
    }

    printf("Union of arrays: ");
    for(i = 0; i < k; i++) {
        printf("%d ", union_arr[i]);
    }
    printf("\n");

    return 0;
}