#include<stdio.h>
int main()
{
    int num;
    int n;
    int mul;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Enter no. of terms : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        mul = num*i;
        printf("%d * %d = %d\n",i,num,mul);
    }
    return 0;
}
