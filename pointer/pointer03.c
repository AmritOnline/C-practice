//Write a C program to find the maximum element in an array using pointers.

#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // assuming max size of array is 100
    int *ptr;
    int max;

    // Input array size
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize pointer and max
    ptr = arr;
    max = *ptr;

    // Find maximum using pointer
    for(i = 1; i < n; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    // Output the result
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}
