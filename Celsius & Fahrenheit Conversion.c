#include<stdio.h>
void main()
{float a,b,c,t,nt;
printf("ENTER 1 TO CONVERT CELSIUS TO FAHRENHEIT\nENTER 2 TO CONVERT FAHRENHEIT TO CELSIUS\n");
scanf("%f",&a);
if(a==1){
printf("Enter Temperature In Celsius:");
scanf("%f",&t);
nt=t*9/5.0+32;
printf("Temperature in Fahrenheit:%f",nt);
}else{
if(a==2){
        printf("Enter Temperature In Fahrenheit:");
scanf("%f",&t);
nt=(t-32)*5.0/9 ;
printf("Temperature in Celsius:%f",nt);
}else{printf("wrong input");}
}}
