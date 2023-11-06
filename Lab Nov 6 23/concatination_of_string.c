/*Concatination of two string without using string.h*/

#include <stdio.h>

void stringcat(char a[], char b[],int n){
	int i,j,k;
	for (i=0;i<n;i++){
		if (a[i]=='\0'){
			for (j=i; j<n; j++){
				a[j]=b[k];
				k++;
			}a[n]='\0';
		}
	}
}

int main(){
	int n,i;
	printf("Enter the maximum string length:- ");
	scanf("%d%*c",&n);
	char a[n],b[n];
	printf("Enter the string1:- ");
	scanf("%[^\n]s",&a);
	scanf("%*c");
	printf("Enter the string2:- ");
	scanf("%[^\n]s",b);
	scanf("%*c");
	
	stringcat(a,b,n);
	
	printf("%s",a);
	
	return 0;
}
	
