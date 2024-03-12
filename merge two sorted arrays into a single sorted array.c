#include <stdio.h>

#define MAX_SIZE 100

// Function to merge two sorted arrays into a single sorted array
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and compare elements to merge them into the mergedArray
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

    // Copy the remaining elements of arr1, if any
    while (i < size1) {
        mergedArray[k++] = arr1[i++];
    }

    // Copy the remaining elements of arr2, if any
    while (j < size2) {
        mergedArray[k++] = arr2[j++];
    }
}

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergedArray[MAX_SIZE * 2];
    int size1, size2, mergedSize;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter elements of the first array (in sorted order): ");
    for (int i = 0; i < size1; ++i) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    printf("Enter elements of the second array (in sorted order): ");
    for (int i = 0; i < size2; ++i) {
        scanf("%d", &arr2[i]);
    }

    // Merge the two sorted arrays
    mergeSortedArrays(arr1, size1, arr2, size2, mergedArray);
    mergedSize = size1 + size2;

    // Print the merged sorted array
    printf("Merged sorted array: ");
    for (int i = 0; i < mergedSize; ++i) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
