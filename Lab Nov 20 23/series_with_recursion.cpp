/*Recursion*/

#include <stdio.h>

int series(int n,int a,int b,int c){
	if (n==1)
		return a;
	else if (n==2)
		return b;
	else if (n==3)
		return c;
	else
		return series(n-1,a,b,c) + series(n-2,a,b,c) + series(n-3,a,b,c);
	
}

int main(){
	int a,b,c,n;
	printf("Enter a b c value:- ");
	scanf("%d %d %d",&a,&b,&c);
	printf("Enter the value of n:- ");
	scanf("%d",&n);
	
	printf("%d",series(n,a,b,c));
}
