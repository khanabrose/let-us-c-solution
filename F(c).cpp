#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,aggr;
	float per;
	printf("\n enter the marks in 5 subject");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	aggr=m1+m2+m3+m4+m5;
	per=aggr*100/5;
	printf("aggrate mark = %d",aggr);
	printf("/n percentage mark = %f",per);
	return 0;
}
