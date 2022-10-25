/* The length & breadth of a rectangle and radius of a circle are input through the keyboard.
write a program to calculate the area & perimeter of the rectangle and the area & circumference of th circle
*/

#include<stdio.h>
int main ()
{
	float length,bredth,height,radius,area1,area2,perimeter,circumference;
	printf("enter the length and bredth");
	scanf("%f%f",&length,&bredth);
	area1=length*bredth;
	perimeter=2*length+2*bredth;
	printf("/n area of a rectangle =%f",area1);
	printf("/n perimeter of rectangle =%f",perimeter);
	printf("/n  enter the radius of circule :");
	scanf("%f",radius);
	area2=3.14*radius;
	circumference=2*3.14;
	printf("area of circule = %f",area2);
	printf("circumference of circle =%f",circumference);
	return 0;
}
