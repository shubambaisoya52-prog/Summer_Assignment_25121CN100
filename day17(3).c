#include <stdio.h>

int main() {
    int n1, n2, i, j, k, exists, already_added;
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

    int intersect_arr[n1 < n2 ? n1 : n2];
    int count = 0;

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                already_added = 0;
                for(k = 0; k < count; k++) {
                    if(intersect_arr[k] == arr1[i]) {
                        already_added = 1;
                        break;
                    }
                }
                if(!already_added) {
                    intersect_arr[count++] = arr1[i];
                }
                break;
            }
        }
    }

    printf("Intersection of arrays: ");
    for(i = 0; i < count; i++) {
        printf("%d ", intersect_arr[i]);
    }
    printf("\n");

    return 0;
}