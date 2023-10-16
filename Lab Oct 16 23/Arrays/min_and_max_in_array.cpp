#include <stdio.h>
int main(){
	int l,max,min,sum=0;
	printf("Enter the number of elements:- ");
	scanf("%d",&l);
	int a[l]={};
	for (int i=0;i<l;i++){
	scanf("%d",&a[i]);
	if(i==0) max=min=a[i];
	if (a[i]>max) max=a[i];
	else if(a[i]<min) min=a[i];
	sum+=a[i];
	}
	printf("Maximum of the given inputs is:- %d\nMinimum of the given inputs is:- %d\nAverage of the given inputs is:- %d",max,min,(sum/l));
	
}
