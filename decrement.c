#include<stdio.h>

int main()
{

    int A = 10, B = 10;
    int No1 = 0, No2 = 0;

    No1 = A--;   // Post Decrement (First Initialized then increment)
    printf("VAlue of No1 : %d",No1);
    printf("\nVAlue of A : %d",A);

    No2 = --B;   // Pre Decrement
    printf("\nVAlue of No2 : %d",No2);
    printf("\nVAlue of B : %d",B);

    return 0;
} 