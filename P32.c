#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter no. of terms : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("The sum of n natural numbers = %d",sum);
    return 0;
}
