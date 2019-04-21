#include<stdio.h>
void main()
{
int a,b,c,g,s;
printf("Enter First Number:");
scanf("%d",&a);
printf("Enter Second Number:\n");
scanf("%d",&b);
if(a>=b)
{g=a;
s=b;
}else{
g=b;
s=a;}
printf("Greater:%d",g);
printf("\nSmaller:%d\n",s);
while(g<10)
{printf("\nEnter Number:");
    scanf("%d",&a);
if(a>g)
{c=g;
g=a;
printf("\nGreater:%d",g);
}else{
    c=a;
printf("\nGreater:%d",g);
}
if(c<s)
{s=c;
printf("\nSmaller:%d\n",s);
}else{
printf("\nSmaller:%d\n",s);}
}}
