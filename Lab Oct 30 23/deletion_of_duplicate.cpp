/*Deleting duplicate element*/
#include <stdio.h>
int main(){
	int l,count,temp,tfreq;
	printf("Enter the number of elements:- ");
	scanf("%d",&l);
	int a[l]={};
	for (int i=0;i<l;i++){
	scanf("%d",&a[i]);
	}
	
	for (int i=0; i<l; i++){
		count=0;
		for(int j=i+1; j<l; j++){
			if (a[i]==a[j]){
				count++;
			}
			
		}
		if (count) {
			for(int j=i; j<l-1; j++){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}	
		} tfreq+=count;
			
	}
	
	printf("%d ",tfreq);
	for (int i=0;i<l;i++) printf("%d ",a[i]);
	
	
	
}
