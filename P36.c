#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of of rows : ");
    scanf("%d",&n);

    for(int i=0 ; i<n; i++)
    {
        int num = 1;
        for(int j=1; j<n-i; j++)
        {
            printf(" ");
        }
        for (int j=0; j<=i; j++)
        {
            printf("%d ", num);
            num = num * (i-j) / (j+1);   // num = [num * (i-j)] / (j+1)
        }
    printf("\n");
    }
    return 0;
}
