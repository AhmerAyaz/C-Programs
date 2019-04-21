#include<stdio.h>
void main()
{
	float distance,inch,meter,feet,centimeter;
	printf("Input Distance (in km):");
	scanf("%f",&distance);
	meter=distance*1000;
	feet=distance*3280.84;
	inch=distance*39370.1;
	centimeter=distance*100000;
	printf("Distance In Meters:%f\n",meter);
	printf("Distance In Feet:%f\n",feet);
	printf("Distance In Inch:%f\n",inch);
	printf("Distance In Centimeter:%f\n",centimeter);
}
