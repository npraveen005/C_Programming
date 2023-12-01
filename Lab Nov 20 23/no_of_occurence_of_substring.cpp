/*Number of occurence of substring in a given string*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char a[20], b[20];
	int i,j,c = 0,count = 0,n,l;
	n = strlen(a);
	l = strlen(b);
	
	fflush(stdin);
	scanf("%[^\n]",a);
	fflush(stdin);
	scanf("%[^\n]",b);
	
	for (i=0;i<n-l+1;i++){
		for (j=0;j<l;j++){
			if(b[j] == a[i+j]) {
				c++;
				printf("%d",c);
			}
		}
		if (c == l){
			count++;
		}
		c=0;
	}
	
	printf("%d",count);
	
}
