
#include "stdio.h"

int main() {
    int alrex;
    float omandam;

    printf("Enter an integer: ");
    scanf("%d", &alrex);

    printf("Enter a real number: ");
    scanf("%f", &omandam);

    if (alrex > 0) {
        printf("Integer is POSITIVE\n");
    }
    else if (alrex < 0) {
        printf("Integer is NEGATIVE\n");
    }
    else {
        printf("Integer is NEUTRAL\n");
    }

    
    if (omandam > 0) {
        printf("Float is POSITIVE\n");
    }
    else if (omandam < 0) {
        printf("Float is NEGATIVE\n");
    }
    else {
        printf("Float is NEUTRAL\n");
    }

    return 0;
}