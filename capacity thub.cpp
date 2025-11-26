#include<stdio.h>
#include<math.h>
int main()
{ 
	int t,s,b,total;
	scanf("%d%d%d",&t,&s,&b);
	total =2*t*s*b*512;
	printf("%d",total/1024);
	return 0;
	
}
