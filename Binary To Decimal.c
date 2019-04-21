#include<stdio.h>
void main()
{
    int n,i,f,j,s=0;
    printf("Enter Binary Digits:");
    scanf("%d",&n);
    int d[n];
    for(i=0;i<n;i++)
    {
        d[i]=n%10;
        n=n/10;
        for(j=0;j<i;j++)
        {
            d[i]=d[i]*2;
        }
    }
    for(i=0;i<=j;i++)
    {
        n=n*2;
    }
    s=n;
    i=i-2;
    for( ;i>=0;i--)
    {
        s=s+d[i];
    }
    printf("Decimal:%d",s);
}
