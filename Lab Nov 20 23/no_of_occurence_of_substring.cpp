/*Number of occurence of substring in a given string*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	int i,j,c = 0,count = 0,n,l,size;
	printf("Enter maximum string size:- ");
	scanf("%d",&n);
	char a[20], b[20];
	
	printf("Enter the string:- ");
	fflush(stdin);
	scanf("%[^\n]s",a);
	fflush(stdin);
	printf("Enter the substring to be counted:- ");
	scanf("%[^\n]s",b);
	scanf("%*c");
	
	n = strlen(a);
	l = strlen(b);
	
	for (i=0;i<n-l+1;i++){
		for (j=0;j<l;j++){
			
			if(b[j] == a[i+j]) {
				c++;
			}
		}
		if (c == l){
			count++;
		}
		c=0;
	}
	
	printf("Count of '%s' in '%s' is:- %d",b,a,count);
	
}
