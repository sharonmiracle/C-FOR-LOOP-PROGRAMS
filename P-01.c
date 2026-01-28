#include<stdio.h>
#include<math.h>

int main()
{
    int n, temp, rem;
    int count = 0;
    int sum = 0;

    printf("Enter a number : ");
    scanf("%d",&n);
    
    temp = n;
    
    // count the no. of digits
    while(temp!=0)
    {
        count++;
        temp = temp/10;
    }
    
    temp = n;
    
    // calculate Armstrong number
    while(temp!=0)
    {
        rem = temp%10;
        sum += pow(rem, count);
        temp = temp/10;
    }
    printf("The sum is %d",sum);
    
    if(sum == n)
    {
        printf("\n%d is an Armstrong number",n);
    }
    else
    {
        printf("\n%d is not an Armstrong Number",n);
    }
    return 0;
}
