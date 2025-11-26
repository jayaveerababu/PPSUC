#include<stdio.h>
int main()
{
	float c,fah;
	printf("enter temp in fahrenheit:");
	scanf("%f",&fah);
	c=(fah-32)/1.8;
	printf("temp in celsius:%.2f",c);
	return 0;
}
