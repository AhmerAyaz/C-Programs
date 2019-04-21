#include<stdio.h>
int main()
{int num,x;
printf("Input Number: ");
scanf("%d",&num);
x=num%2;
if(x==1){
    printf("odd");
}else{printf("even");
}
}
