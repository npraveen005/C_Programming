#include <stdio.h>
int main(){
	int n;
	printf("Enter the number of rows:- ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		for (int j=1;j<=i;j++)printf("  ");
		for (int k=1;k<(2*n-2*i);k++)printf("* ");
		printf("\n");
	}
}
