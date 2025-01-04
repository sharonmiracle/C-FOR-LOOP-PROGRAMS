#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n<=1)
    {
        count++;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
    return 0;
}
