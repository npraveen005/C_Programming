/*Seperating odd and even from an array*/

#include <stdio.h>

int main(){
	int l;
	printf("Enter the number of elements:- ");
	scanf("%d",&l);
	int a[l]={}, even[l], odd[l], even_index, odd_index=0;
	for (int i=0;i<l;i++){
	scanf("%d",&a[i]);
	}
	
	for (int i=0;i<l;i++){
		if(a[i] % 2 ==0){
			even[even_index] = a[i];
			even_index++;
		}
		else{
			odd[odd_index] = a[i];
			odd_index++;
			
		}
	}
	
	for (int i=0;i<l;i++) printf("%d ",a[i]);
	printf("\nEven elements are\n");
	for (int i=0;i<even_index;i++) printf("%d ",even[i]);
	printf("\nOdd elements are\n");
	for(int j=0; j<odd_index; j++) printf("%d ",odd[j]);
	
}
