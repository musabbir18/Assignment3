 #include<stdio.h>

int main()
{
    int a,b,n;
    int i;
       int sum=0;
    printf("enter the two number:-");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a*b;i++)
    {  
       if(i%a==0&&i%b==0)
       {
         break;
        }
      
      
    }
   
 printf("%d",i);
}