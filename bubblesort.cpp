#include<stdio.h>
int main ()
{
	int i,j,temp,n,a[10];
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[10]);
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}printf("sorted array elements");
	for(i=0;i<n;i++)
	printf("%d",a[i]); 
}
