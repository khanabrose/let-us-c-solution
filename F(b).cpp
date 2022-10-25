#include<stdio.h>
int main()
{
	float km,m,cm,ft,inch;
	printf("enter the distance in the kilometer :");
	scanf("%f",&km);
	m=km*1000;
	cm=m*100;
	inch=cm/2.54;
	ft=inch/12;
	printf("distance in meter : =%f \n",m);
	printf("\n distance in centimeter : = %f",cm);
	printf("\ndistance in inch : %f ",inch);
	return 0;
	
}
