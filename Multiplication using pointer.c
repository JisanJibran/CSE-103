#include <stdio.h>

int main() {
    int a, b, r;

    // Pointers to store the addresses of number 1 and number 2
    int *p, *q;

    // Initialize the pointers with the addresses of a and b
    p = &a;
    q = &b;

    // Input the first integer
    printf("Enter the first integer: ");
    scanf("%d", p);

    // Input the second integer
    printf("Enter the second integer: ");
    scanf("%d", q);

    // Multiply the values using pointers and store the result in the 'result' variable
    r = (*p) * (*q);

    // Display the result
    printf("Multiplication result: %d\n", r);

    return 0;
}
