#include<stdio.h>
int main()
{
    int i,j,k,n,l,s;
    printf("Num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=n;s-i>0;s--)
        {
            printf(" ");
        }
        for(j=i;j>0;j--)
        {
            printf("%d",j);
            for(l=2;l<=i&&j==1;l++)
        {
            printf("%d",l);
        }
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=i;s++)
        {
            printf(" ");
        }
        for(j=(n-i);j>0;j--)
        {
            printf("%d",j);
            for(l=2;l<=(n-i)&&j==1;l++)
        {
            printf("%d",l);
        }
        }
        printf("\n");
    }
        //printf("\n");
    }
    //}
