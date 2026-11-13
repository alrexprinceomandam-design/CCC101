#include "stdio.h"

int main() {
    int alrex, omandam, sum;

    printf("Enter first number: ");
    scanf("%d", &alrex);

    printf("Enter second number: ");
    scanf("%d", &omandam);

    sum = alrex + omandam;

    printf("The sum is: %d", sum);

    return 0;
}