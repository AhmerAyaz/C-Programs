#include<stdio.h>
void main()
{
    int r1,c1,r2,c2,r,c,i,j;
    printf("Enter No. Of Rows R1:");
    scanf("%d",&r1);
    printf("Enter No. Of Columns C1:");
    scanf("%d",&c1);
    printf("Enter No. Of Rows R2:");
    scanf("%d",&r2);
    printf("Enter No. Of Columns C2:");
    scanf("%d",&c2);
   int m1[r1][c1],m2[r1][c1],sum[r1][c1];
    if(r1==r2&&c1==c2)
    {
        for(r=0;r<r1;r++)
        {
            for(c=0;c<c1;c++)
            {
                printf("\nEnter No. For M1:");
                scanf("%d",&m1[r][c]);
                printf("\nEnter No. For M2:");
                scanf("%d",&m2[r][c]);
            }
        }
        printf("\nResultant Matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                sum[i][j]=m1[i][j]+m2[i][j];
                printf(" %d",sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error");
    }

}
