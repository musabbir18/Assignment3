#include<stdio.h>

int main()
{
    int x;
    printf("enter the number:-");
    scanf("%d",&x);
    if(x>0)
    {
        printf("positive");
    }
    if(x<=0)
    {
        printf("non positive number");
    }
    return 0;
}