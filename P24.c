#include<stdio.h>
int main()
{
    int n;
    int rem;
    int rev=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n/=10;
    }
    if(rev==temp)
    {
        printf("The given number is a Palindrome");
    }
    else
    {
        printf("The given number is not a Palindrome");
    }
    return 0;
}
