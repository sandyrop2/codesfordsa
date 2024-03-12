#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);


    discriminant = b * b - 4 * a * c;

    // If discriminant is greater than 0, roots are real and different
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different:\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    // If discriminant is equal to 0, roots are real and equal
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    // If discriminant is less than 0, roots are complex and different
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different:\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}
