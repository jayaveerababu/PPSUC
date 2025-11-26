#include<stdio.h>
#include<math.h>
int main()
{ //loss percentage
 double cp,sp,lp;
 scanf("%lf%lf",&cp,&sp);
 lp=((cp-sp)/cp)*100;
 printf("%.2lf",lp);
 return 0;
}
