#include <stdio.h>

#define MAX_SIZE 100

// Function to segregate 0s and 1s in an array
void segregateZerosOnes(int arr[], int size) {
    int left = 0, right = size - 1;

    // Move all 0s to the left side and all 1s to the right side
    while (left < right) {
        // Find the first non-zero element from the left
        while (arr[left] == 0 && left < right) {
            left++;
        }

        // Find the first zero element from the right
        while (arr[right] == 1 && left < right) {
            right--;
        }

        // Swap the elements if found
        if (left < right) {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}

int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter elements of the array (0s and 1s only): ");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    // Segregate 0s and 1s in the array
    segregateZerosOnes(arr, size);

    // Print the segregated array
    printf("Segregated array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
