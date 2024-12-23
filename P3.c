#include<stdio.h>
int main()
{
    int num;
    int flag;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
    {
        if(i*i==num)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
   
    if(flag == 1)
    {
        printf("It is a Perfect Square Number");
    }
    else
    {
        printf("It is not a Perfect Square Number");
    }
}
