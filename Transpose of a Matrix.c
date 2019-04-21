#include<stdio.h>
int main()
{
    int i,r,j,c;
    printf("Enter R:");
    scanf("%d",&r);
    printf("Enter C:");
    scanf("%d",&c);
    int matrix[r][c],transpose[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&matrix[i][j]);
            transpose[j][i]=matrix[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf(" %d",transpose[i][j]);
        }
        printf("\n");
    }
}
