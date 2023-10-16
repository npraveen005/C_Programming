#include <stdio.h>
int main(){
	int n,k=1;
	printf("Enter the number of rows:- ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		for (int j=0;j<=i;j++){
		printf("%d ",k);
		k++;}
		for (int k=0;k<=(n-i-1);k++) printf(" ");
		printf("\n");
		
	}
	
}
