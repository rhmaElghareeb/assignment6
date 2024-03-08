#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i,size,max, min;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    arr = malloc(size * sizeof(int));

    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
     max = min = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum value is: %d\n", max);
    printf("Minimum value is: %d\n", min);
    free(arr);

    return 0;
 }
