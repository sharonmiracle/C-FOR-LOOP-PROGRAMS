#include<stdio.h>
int main()
{
    int n;
    int t1=0, t2=1;
    int t3;
    printf("Enter no. of terms : ");
    scanf("%d",&n);
    printf("Fibonacci series of %d is %d %d ",n, t1, t2);
    for(int i=2;i<n;i++)
    {
        t3=t1+t2;
        printf("%d ",t3);
        t1=t2;
        t2=t3;
    }
    return 0;
}
