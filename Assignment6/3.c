 #include<stdio.h>

int main()
{
    int i,n;
       int sum=0;
    printf("enter the number:-");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {  
     
        sum=sum+i; 
      
    }
   
 printf("%d",sum);
}