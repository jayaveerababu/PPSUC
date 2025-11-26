#include<stdio.h>
int main()
{
	float u,a,d;
	int t;
	printf("enter velocity:");
	scanf("%f",&u);
	printf("enter accelaration:");
	scanf("%f",&a);
	printf("enter time:");
	scanf("%d",&t);
	d=(u*t)+(a*t*t)/2;
	printf("distance is :%.2f",d);
	return 0;
}
