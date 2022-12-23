#include<stdio.h>
int main()
{
    int num ;
    printf("print the positive value");
    scanf("%d\n",&num);
    if (num>=0)
    {
        printf("%d is positive value");
    }
    else 
    {
        printf("%d is negative number");
    }
    
    return 0;
    
}