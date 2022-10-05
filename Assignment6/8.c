 #include<stdio.h>

int main()
{
    int i,n;
    int flag=0;
    printf("enter the number:-");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
  if(n%i==0)
  {
     flag=1;
     break;
  }
    }
    if(flag==1)
    {
        printf("not prime number");
    }
  else
  {
    printf(" prime number");
  }
}