#include<stdio.h>
int main()
{
    int num;
    int flag = 0;
    
    printf("Enter a number : ");
    scanf("%d",&num);
    
    if(num < 0)
    {
        printf("It is not a Perfect Square Number");
        return 0;
    }
    
    for(int i=0; i*i<=num; i++)
    {
        if(i*i == num)
        {
            flag = 1;
            break;
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
    
    return 0;
}
