#include<stdio.h>
int main()
{

    int no = 11;

    int *ptr = &no;

    printf("%d\n",no);
    printf("%d\n",&no);
    printf("%d\n",sizeof(no));
    printf("%d\n",ptr);
    printf("%d\n",&ptr);
    printf("%d\n",sizeof(ptr));
    printf("%d\n",*ptr);

    return 0;
} 