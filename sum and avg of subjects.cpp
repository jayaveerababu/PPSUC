#include<stdio.h>
#include<math.h>
int main()
{ //sum and avgerage of subject
  int a,b,c,d,e,sum;
  float avg;
  printf("enter five subject marks: ");
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  sum=a+b+c+d+e;
  printf("sum is:%d\n",sum);
  avg=sum/5;
  printf("avg is:%.2f",avg);
  }
