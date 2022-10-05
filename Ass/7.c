#include<stdio.h>

int main()
{
    int a,b,c;
    int disc=b*b-4*a*c;
     printf("enter the number:-");
     scanf("%d%d%d",&a,&b,&c);
     if(disc>0)
     {
        printf("real and distinct");

     }
     else if (disc<0)
     {
        printf("imanginary root");

     }
     else
     {
        printf("real and equal root");
     }
     printf("\n");
     return 0;
}