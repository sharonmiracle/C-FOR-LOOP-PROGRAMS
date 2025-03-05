#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            printf("  ");
        }
        for(int col=1;col<=row;col++)
        {
            printf("%c ",col+64);
        }
        for(int col=row-1;col>=1;col--)
        {
            printf("%c ",col+64);
        }
        printf("\n");
    }
    return 0;
}
