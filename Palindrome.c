 #include<stdio.h>
void main()
{int d1,d2,d3,d4,num;
printf("Enter 4 Digit Number To Reverse:");
scanf("%d",&num);
d1=num%10;
num=num/10;
d2=num%10;
num=num/10;
d3=num%10;
d4=num/10;
if(d1==d4&&d3==d2)
{
printf("Palindrome");
}else{
    printf("%d%d%d%d\n",d1,d2,d3,d4);
}}
