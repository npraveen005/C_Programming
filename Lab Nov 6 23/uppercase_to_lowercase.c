/*Converting uppercase to lower case*/

#include <stdio.h>

void uptolow(char a[],int n){
	int i,z;
	for(i=0; i<n; i++){
		if ((int)a[i]>=65 && (int)a[i]<=90){
			z = (int) (a[i])+ 32;
			a[i] = (char) z;	
		}
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
	scanf("%*c");
	
	uptolow(a,stringlen(a,n));
	
	printf("%s",a);
	
	return 0;
}
