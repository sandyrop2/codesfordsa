#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void readArray(int a[], int N);
void displayArray(int a[], int N);
int equality(int a[], int N, int b[], int M);

int main() {
    int a[MAX];
    int b[MAX];
    int N;
    int M;
    int test;

    printf("Enter the size of the 1st array\n");
    test = scanf("%d", &N);
    if (test != 1) {
        printf("Enter integers only\n");
        exit(0);
    } else if (N <= 0) {
        printf("Size of the array should be positive\n");
    } else if (N > MAX) {
        printf("Size of the array should be less than %d\n", MAX);
    } else {
        printf("Enter 1st array elements\n");
        readArray(a, N);

        printf("Enter the size of the 2nd array\n");
        test = scanf("%d", &M);
        if (test != 1) {
            printf("Enter integers only\n");
            exit(0);
        } else if (M <= 0) {
            printf("Size of the array should be positive\n");
        } else if (M > MAX) {
            printf("Size of the array should be less than %d\n", MAX);
        } else {
            printf("Enter 2nd array elements\n");
            readArray(b, M);

            if (M != N) {
                printf("Two arrays are not equal\n");
            } else {
                if (equality(a, N, b, M)) {
                    printf("Two arrays are equal\n");
                } else {
                    printf("Two arrays are not equal\n");
                }
            }
        }
    }
    return 0;
}

void readArray(int a[], int N) {
    int i;
    int test;
    for (i = 0; i < N; i++) {
        test = scanf("%d", &a[i]);
        if (test != 1) {
            printf("Enter valid data\n");
            exit(0);
        }
    }
}

void displayArray(int a[], int N) {
    int i;
    for (i = 0; i < N; i++) {
        printf("%d\n", a[i]);
    }
}

int equality(int a[], int N, int b[], int M) {
    int i;
    for (i = 0; i < N; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}
