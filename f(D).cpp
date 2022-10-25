/* Temperature of a city in fahrenheit is input through the keyboard.
write a program to convert this temperature into centigrate degrees.*/

#include<stdio.h>
int main()
{
	float f,c;
	printf("/n enter the temperture F : ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("temperture in centigrade = %f",c);
	return 0;
}
