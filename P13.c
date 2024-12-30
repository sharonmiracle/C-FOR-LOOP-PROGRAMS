#include<stdio.h>
int main()
{
    int n;
    int num=64;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            printf("%c ",col+num);
        }
        printf("\n");
    }
    return 0;
}
