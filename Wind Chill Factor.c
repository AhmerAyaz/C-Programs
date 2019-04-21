#include<stdio.h>
void main()
{
float t,v,wcf;
printf("Enter Temperature");
scanf("%f",&t);
printf("Enter Wind Velocity");
scanf("%f",&v);
wcf=35.74+0.6215*t+(0.4275*t-35.75)*v^0.16;
printf("Wind Chill Factor:%f",wcf);
}
