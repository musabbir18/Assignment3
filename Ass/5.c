#include<stdio.h>

int main()
{
    int x;
    printf("enter the number:_");
    scanf("%d",&x);
    if(x>99&x<1000)
    {
        printf("three digit number");
    
    }
    else
    {
        printf("not three digit number");
    }
}