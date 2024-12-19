#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    int rem;
    printf("Enter a number : ");
    scanf("%d",&n);
    int num = n;
    while(n!=0)
    {
        rem=n%10;
        sum+=(rem*rem*rem);
        n= n/10;
    }
    printf("%d",sum);
    if(sum == num)
    {
        printf("\nIt is an Amstrong number");
    }
    else
    {
        printf("\nIt is not an Amstrong Number");
    }
    return 0;
}
