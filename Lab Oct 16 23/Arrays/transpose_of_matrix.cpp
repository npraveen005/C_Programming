#include <stdio.h>
int main(){
	int r;
	printf("Enter the number of rows:- ");
	scanf("%d",&r);
	int a[r][r]={};
	int b[r][r]={};
	for (int i=0;i<r;i++)
	for (int j=0;j<r;j++){
		scanf("%d",&a[i][j]);
	}
	for (int i=0;i<r;i++)
	for (int j=0;j<r;j++)
	{
		b[i][j] = a[j][i];
	}printf("\n");
	for (int i=0;i<r;i++){
	for (int j=0;j<r;j++){
		printf("%d ",b[i][j]);
	}printf("\n");}
	return 0;
}
