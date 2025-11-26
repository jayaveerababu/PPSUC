#include<stdio.h>
int main(){
	int a;
	float b;
	char cha;
	char str[100];
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter a float number:");
	scanf("%f",&b);
	printf("enter a character:");
	scanf("%c",&cha);
	printf("enter a sentence:");
	scanf("%s", str);
	printf("%d\n%f\n%c\n%s\n",a,b,cha,str);
	return 0;
}
