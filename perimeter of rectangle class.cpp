#include<stdio.h>
#include<math.h>
int main(){
	int a,b,perimeter;
	printf("enter two sides:");
	scanf("%d%d",&a,&b);
	perimeter=2*(a+b);
	printf("perimeter is:%d",perimeter);
	return 0;
}
