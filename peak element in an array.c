#include <stdio.h>

// Function to find a peak element in an array
int findPeak(int arr[], int size) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if arr[mid] is a peak element
        if ((mid == 0 || arr[mid] >= arr[mid - 1]) &&
            (mid == size - 1 || arr[mid] >= arr[mid + 1])) {
            return arr[mid];
        }

        // If arr[mid - 1] is greater than arr[mid], then peak element lies in the left half
        else if (mid > 0 && arr[mid - 1] > arr[mid]) {
            high = mid - 1;
        }

        // Otherwise, peak element lies in the right half
        else {
            low = mid + 1;
        }
    }

    return -1; // No peak element found
}

int main() {
    int arr[] = {1, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int peak = findPeak(arr, size);
    if (peak != -1) {
        printf("Peak element in the array is: %d\n", peak);
    } else {
        printf("No peak element found in the array.\n");
    }

    return 0;
}
