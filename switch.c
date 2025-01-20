#include<stdio.h>

int main()
{
    int Standard = 0;

    printf("Enter you standard: \n");
    scanf("%d",&Standard);

    switch (Standard)
    {
    case 1:
        printf("Your Exam is at 8 a.m.\n");
        break;

    case 2:
        printf("Your Exam is at 9 a.m.\n");
        break;

    case 3:
        printf("Your Exam is at 10 a.m.\n");
        break;

    case 4:
        printf("Your Exam is at 11 a.m.\n");
        break;
    
    default:
        printf("You entered wrong choice\n");
    }

    return 0;
} 