#include<stdio.h>
void main()
{int a,b,i,s;
printf("Enter Number:");
scanf("%d",&a);
printf("Enter Power:");
scanf("%d",&b);
s=a;
for(i=b;i>1;i--)
{
    s=s*a;
}
printf("Answer=%d\n",s);
}
