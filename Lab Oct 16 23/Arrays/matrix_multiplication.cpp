#include <stdio.h>
int main(){
	int c,r;
	printf("Enter the number of rows:- ");
	scanf("%d",&r);
	printf("Enter the number of columns:- ");
	scanf("%d",&c);
	int a[r][c]={};
	int b[r][c]={};
	int d[r][c]={};
	for (int i=0;i<r;i++)
	for (int j=0;j<c;j++){
		scanf("%d",&a[i][j]);
	}printf("First matrix assigned!\n\n");
	for (int i=0;i<r;i++)
	for (int j=0;j<c;j++){
		scanf("%d",&b[i][j]);
	}printf("Second matrix assigned!\n\n");
	
	for (int i=0;i<r;i++)
	for (int j=0;j<c;j++)
	for (int k=0;k<)
	d[][] += a[i][k] * b[k][i];
	
	
	
	return 0;}
