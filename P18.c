#include <stdio.h>
int main()
{
    int n;
    int rem;
    int sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int num=n;
    while(n!=0)
    {
       rem=n%10;
       sum+=rem;
       n=n/10;
    }
    if(num%sum==0)
    {
        printf("It is a Harshad Number");
    }
    else
    {
        printf("It is not a Harshad Number");
    }

    return 0;
}
