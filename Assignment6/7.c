 #include<stdio.h>

int main()
{
    int i,n;
     int count=0;
    printf("enter the number:-");
    scanf("%d",&n);
   while(n!=0)
   {
     n=n/10;
     count++;
   }
   printf("%d",count);
}
