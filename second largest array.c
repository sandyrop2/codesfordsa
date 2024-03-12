#include <stdio.h>

int main() {
    int arr[100], size, max1, max2;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter elements of the array: ");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    // Initialize max1 and max2 with first two elements of the array
    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    // Find the largest and second largest elements in the array
    for (int i = 2; i < size; ++i) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("The second largest element in the array is: %d\n", max2);

    return 0;
}
