#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
