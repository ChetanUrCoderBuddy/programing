#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the valus\n");
    scanf("%d", &a);
    if (a % 2 == 0)
{
        printf("number of %d is even\n",a);
    }
    else{
    printf("number of %d is not even\n",a);
    }
}