/*Length of a a string without using string.h*/

#include <stdio.h>

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
	int n;
	printf("Enter the maximum string length:- ");
	scanf("%d%*c",&n);
	char a[n];
	printf("Enter the string:- ");
	fgets(a,n,stdin);
	//scanf("%[^\n]s%*c",a);
	
	stringlen(a,n);
	
	return 0;
}
