#include<stdio.h>
int main()
{
    int n;
    int rem;
    int result=0;
    int place=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        if(rem==9)
        {
            result+=0*place;
        }
        else
        {
            result+=(rem+1)*place;
        }
        place*=10;
        n=n/10;
    }
    printf("%d",result);
    return 0;
}
