#include<stdio.h>
int main()
{
	float c,fah;
	printf("enter temp in celsuis:");
	scanf("%f",&c);
	fah=(1.8*c)+32;
	printf("temp in fahrenheit:%.2f",fah);
	return 0;
}
