/*Reversing a string*/

#include <stdio.h>
#include <stdlib.h>

void stringrev(char a[], int n){
	int i;
	char b[n];
	
	for (i=0; i<n; i++){
		b[n-1-i] = a[i];
	}
	for (i=0; i<n; i++){
		a[i] = b[i];
	}
}

int stringlen(char a[], int n){
	int i;
	for (i=0;i<n;i++){
		if (a[i]=='\0')
			{
				return i;
			}
	}
}

int main(){
	int n,i;
	printf("Enter the maximum string length:- ");
	scanf("%d%*c",&n);
	char a[n];
	printf("Enter the string:- ");
	scanf("%[^\n]s",&a);
//	scanf("%*c");
	fflush(stdin);

	
	stringrev(a,stringlen(a,n));
	


	
	printf("%s",a);
	
	return 0;
}
	
