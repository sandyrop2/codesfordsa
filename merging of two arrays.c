#include<stdio.h>
#include<stdlib.h>

#define MAX 100

void readArray(int a[], int N);
void displayArray(int a[], int N);
void merge(int a[], int N, int b[], int M);

int main() {
    int a[MAX];
    int b[MAX];
    int test;
    int M, N;

    printf("Enter the number of elements of 1st array: ");
    test = scanf("%d", &N);
    if (test != 1) {
        printf("Enter integers only\n");
        exit(0);
    } else if (N <= 0) {
        printf("Size of the array should be positive\n");
        exit(0);
    } else if (N > MAX) {
        printf("Size of the array should be less than %d\n", MAX);
        exit(0);
    } else {
        printf("Enter the array elements for 1st array: ");
        readArray(a, N);
    }

    printf("Enter the number of elements of 2nd array: ");
    test = scanf("%d", &M);
    if (test != 1) {
        printf("Enter integers only\n");
        exit(0);
    } else if (M <= 0) {
        printf("Size of the array should be positive\n");
        exit(0);
    } else if (M > MAX) {
        printf("Size of the array should be less than %d\n", MAX);
        exit(0);
    } else {
        printf("Enter the array elements for 2nd array: ");
        readArray(b, M);
        merge(a, N, b, M);
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

void merge(int a[], int N, int b[], int M) {
    int c[2 * MAX];
    int i, j;
    j = 0;
    for (i = 0; i < N; i++, j++)
        c[j] = a[i];
    for (i = 0; i < M; i++, j++)
        c[j] = b[i];
    displayArray(c, j);
}

void displayArray(int a[], int N) {
    int i;
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
}
