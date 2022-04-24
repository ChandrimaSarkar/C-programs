#include<stdio.h>
int main()
{
    int n=5;
    int *ptr=&n;
    printf("n:%d\n",n);
    printf("ptr:%d\n",&ptr);
    printf("n using ptr:%d\n",*(ptr));
    printf("n's address:%d\n",&n);
    printf("n's address using ptr:%d\n",ptr);
    return 0;
}

