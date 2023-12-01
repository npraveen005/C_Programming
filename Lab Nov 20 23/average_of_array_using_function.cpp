/*Finding averange of array using function*/

#include <stdio.h>

float avg(int *a,int n){
	float value = 0;
	int i;
	for(i=0;i<n;i++){
		value += a[i];
	}
	
	return (value/n);
}
int main(){
	int n,i;
	printf("Enter the n value of array:- ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	
	printf("Average of the elements in the array is:- %.2f",avg(a,n));
}
