#include<stdio.h>

int main()
{

    int Arr[4] = {10,20,30,40};

    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]);
    printf("%d\n",Arr[3]);

    printf("%lu\n",sizeof(Arr));
    printf("%lu\n",sizeof(Arr[0]));
    printf("%lu\n",sizeof(Arr[2]));

    printf("%d\n",Arr);
    printf("%d\n",&Arr);
    printf("%d\n",&Arr[0]);
    printf("%d\n",&Arr[2]);
    printf("%d\n",&Arr[3]);

    return 0;
} 