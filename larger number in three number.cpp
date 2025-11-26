#include<stdio.h>
#include<math.h>
int main()
{
	//larger number for three numbers
	int a,b,c,big;
	printf("enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	big=a>b?(a>c?a:c):(b>c?b:c);
	printf("larger number is:%d",big);
	
}
