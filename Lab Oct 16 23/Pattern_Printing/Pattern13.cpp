#include <stdio.h>
int main(){
	int n;
	printf("Enter the number of rows:- ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		for (int j=0;j<=i;j++)printf("* ");
		for (int k=0;k<=(2*n-2*i-3);k++) printf("  ");
		for (int l=0;l<=i;l++) printf("* ");
		printf("\n");
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n-i;j++)printf("* ");
		for (int k=0;k<(2*i);k++)printf("  ");
		for (int l=0;l<n-i;l++) printf("* ");
		printf("\n");
	}
}
