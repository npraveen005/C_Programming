/*Frequency of occurrence*/
#include <stdio.h>
int main(){
	int l,count,k;
	printf("Enter the number of elements:- ");
	scanf("%d",&l);
	int a[l]={};
	for (int i=0;i<l;i++){
	scanf("%d",&a[i]);
	}
	
	printf("Enter the number to be checked:- ");
	scanf("%d",&k);	
	
	for (int i=0; i<l; i++){
		if(a[i]==k) count++;
	}
	
	printf("Number of occurrence:- %d",count);
	
}
