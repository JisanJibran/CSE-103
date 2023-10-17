// Write down a program that will take two integers as input using pointers.
// Then using pointers multiply the two values and display the result
#include <stdio.h>

int main() {
    int a, b, r;

    // Pointers to store the addresses of a and b
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
