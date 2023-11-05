/*Frequency of occurrence of every element*/
#include <stdio.h>
int main(){
	int l,count;
	printf("Enter the number of elements:- ");
	scanf("%d",&l);
	int a[l]={};
	for (int i=0;i<l;i++){
	scanf("%d",&a[i]);
	}
	
	for (int i=0; i<l; i++){
		count=0;
		for(int j=1; j<l; j++){
			if (a[i]==a[j]){
				count++;
			}
		}printf("The frequency of occurrence of %d is:- %d\n",a[i],count);
	}
	
	
	
}
