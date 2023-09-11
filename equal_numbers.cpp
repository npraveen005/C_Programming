#include <stdio.h>
int main (){
	int a,b,c;
	printf("Enter three numbers:- ");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && b==c){
		printf("Numbers are equal");
	}
	else{
		printf("Numbers are not equal");
	}
	return 0;
}
