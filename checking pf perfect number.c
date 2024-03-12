#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;

    // Finding proper divisors and adding them up
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Checking if the sum of proper divisors equals the number itself
    if (sum == num)
        return 1; // It's a perfect number
    else
        return 0; // It's not a perfect number
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfect(num))
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}
