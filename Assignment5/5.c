#include<stdio.h>

int main()
{
    int i,n;
    printf("enter the number:-");
    scanf("%d",&n);
    for(i=n;i>=1;i=i-2)
    {
        printf("%d\n",i);
    }
}