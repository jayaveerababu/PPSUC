#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	printf("bitwise AND:%d\n",c=a&b);
	printf("bitwise OR:%d\n",c=a|b);
	printf("bitwise EX-OR:%d\n",c=a^b);
	printf("bitwise LEFT SHIFT:%d\n",c=a<<b);
	printf("bitwise RIGHT SHIFT:%d\n",c=a>>b);
	return 0;
	
}
