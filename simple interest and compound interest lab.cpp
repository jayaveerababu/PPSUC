#include <stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,ci;
    printf("enter p value:");
    scanf("%f",&p);
    printf("enter r value:");
    scanf("%f",&r);
    printf("enter t value:");
    scanf("%f",&t);
    si=(p*t*r)/100.0;
    ci=p*(pow(1+r/100,t)-1);
    printf("si=%f",si);
    printf("ci=%.2f",ci);
    return 0;
}
