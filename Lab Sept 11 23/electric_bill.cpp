#include <stdio.h>
int main(){
	float a;
	printf("Enter the no. of units used:- ");
	scanf("%f",&a);
	if (a>=0 && a<=100){
		printf("Your electricity bill is %f", a*1.5);
	}
	else if(a>=101 && a<=200){
		printf("Your electricity bill is %f", a*3);
	}
	else{
		printf("Your electricity bill is %f", a*5);
	}
	return 0;
}
