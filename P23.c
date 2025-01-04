#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("There are no prime factors for %d",n);
        return 0;
    }

    while(n%2==0)
    {
        sum+=2;
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            sum+=i;
            n/=i;
        }
    }
    if(n>2)
    {
        sum+=n;
    }
    printf("The sum of the Prime Factors is %d",sum);
    return 0;
}
