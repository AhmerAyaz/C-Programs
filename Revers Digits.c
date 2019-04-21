#include<stdio.h>
int main()
{
    int num,dig[4],i;
    Printf("Enter 5 Digits");
	scanf("%d",&num);
    for(i=0;i<4;i++)
    {
        dig[i]=num%10;
        num=num/10;
    }
    dig[4]=num;
    for(i=0;i<5;i++)
    {
        printf("%d ",dig[i]);
    }
    if(dig[0]==dig[4]&&dig[1]==dig[3])
    {
        printf("Same");
    }
}
