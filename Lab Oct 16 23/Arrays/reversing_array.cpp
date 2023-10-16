#include <stdio.h>
int main(){
	int l;
	printf("Enter the number of elements:- ");
	scanf("%d",&l);
	int a[l]={};
	int b[l]={};
	for (int i=0;i<l;i++){
	scanf("%d",&a[i]);
	b[l-i-1]=a[i];
	}
	for (int i=0;i<l;i++) printf("%d ",b[i]);
	
}
