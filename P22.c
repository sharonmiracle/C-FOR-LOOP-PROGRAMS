#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("There are no prime factors for %d",n);
        return 0;
    }
    printf("The prime factors of %d are ",n);
    while(n%2==0)
    {
        printf("%d ",2);
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n/=i;
        }
    }
    if(n>2)
    {
        printf("%d",n);
    }
    return 0;
}
