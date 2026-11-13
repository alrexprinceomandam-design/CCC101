#include "stdio.h"

 void main (){
    int alrex, omandam;

    printf("Enter an Integer: ");
    scanf("%i", &alrex);
    
    omandam = alrex;
    for (int x = 1;x <=omandam /2; x++)
    alrex = alrex - 2;

    if (alrex == 0) printf (" %i is EVEN \n" , omandam);

    else  printf (" %i is ODD\n" ,omandam);




}
