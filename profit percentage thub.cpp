#include<stdio.h>
#include<math.h>
int main()
{
	double cp,sp,pp;
	scanf("%lf%lf",&cp,&sp);
	pp=((sp-cp)/cp)*100;
	printf("%.2lf",pp);
	return 0;
}
