#include<stdio.h>
void main()
{
    int a,i,n,pos=0,neg=0,zero=0;
    printf("Enter Quantity Of Input:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {scanf("%d",&a);
        if(a>0)
        {
            pos++;
        }
        if(a<0)
        {
            neg++;
        }
        if(a==0)
        {
            zero++;
        }
    }
    printf("positive=%d\nneg=%d\nzero=%d",pos,neg,zero);
}

