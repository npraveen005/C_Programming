/*Copying one string to another without using string.h*/

#include <stdio.h>

void stringcpy(char a[], char b[], int n){
	int i;
	for (i=0;i<n;i++){
		a[i]=b[i];
	}
}

int main(){
	int n,i;
	printf("Enter the maximum string length:- ");
	scanf("%d%*c",&n);
	char a[n],b[n];
	printf("Enter the string1:- ");
	scanf("%[^\n]s",a);
	scanf("%*c");
	printf("Enter the string2:- ");
	scanf("%[^\n]s",b);
	scanf("%*c");
	
	stringcpy(a,b,n);
	
	printf("%s\n%s",a,b);
	
	return 0;
}
