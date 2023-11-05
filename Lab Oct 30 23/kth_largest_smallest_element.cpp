/*Finding Kth smallest and largest element*/

#include <stdio.h>
int main(){
	int l,temp,k;
	printf("Enter the number of elements:- ");
	scanf("%d",&l);
	int a[l]={};
	for (int i=0;i<l;i++){
	scanf("%d",&a[i]);
	}
	
	printf("Enter k value:- ");
	scanf("%d", &k);
	
	
	for (int j=0; j<l-1; j++)
	for (int i=0; i<l-j-1; i++){
		if (a[i]>a[i+1]){
			
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}
	}
	
//	for (int i=0;i<l;i++) printf("%d ",a[i]);
printf("%dth smallest element is:- %d\n%dth largest element is:- %d",k,a[k-1],k,a[l-k]);


	


return 0;}
