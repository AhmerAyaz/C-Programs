#include<stdio.h>
void main()
{
    int a,b,s,g,r,n,i;
    printf("Enter Quantity Of Numbers:");
    scanf("%d",&n);
    printf("Enter Number:");
    scanf("%d",&a);
    printf("Enter Number:");
    scanf("%d",&b);
    if(a>b)
    {
        g=a;
        s=b;
    }
    else
    {
        g=b;
        s=a;
    }
    for(i=2;i<n;i++)
    {   printf("Enter Number:");
        scanf("%d",&a);
        if(a>g)
        {
            g=a;
          //  printf("%d",g);
        }
        if(a<s)
        {
            s=a;
        }
    }
    r=g-s;
    printf("Range:%d",r);
   // printf("Highest:%d",g);
    //printf("Lowest:%d",s);
}
