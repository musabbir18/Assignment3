 #include<stdio.h>

int main()
{
    int i,n;
       int sum=0;
       int result=0;
       int rem=0;
    printf("enter the number:-");
    scanf("%d",&n);
    while(n!=0)
    {
    
    rem=n%10;
    n=n/10;
    result=result*10+rem;
   
    }
     printf("%d",result);
}