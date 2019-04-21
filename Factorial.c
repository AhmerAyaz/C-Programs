#include<stdio.h>
void main()
{
    int n,f;
    printf("Enter Number");
    scanf("%d*",&n);
   f=n;
   do
        {   printf("%d*",f);
            f--;
            //printf("%d*",f);

            n=f*n;
    printf("%d\n",n);
    }    while(f>0);

printf("=%d",n);
}
