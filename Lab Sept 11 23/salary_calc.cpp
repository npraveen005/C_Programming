#include <stdio.h>
int main(){
	float sal,da,hra,fin;
	int t;
	printf("Enter your basic salary:- ");
	scanf("%f",&sal);
	printf("Enter your city tier:- ");
	scanf("%d",&t);
	hra=sal*0.25;
	if (t==1){
		da = sal*0.25;
	}
	else if (t==2){
		da=sal*0.2;
	}
	else if(t==3){
		da=sal*0.15;
	}
	else{
		printf("Enter a valid tier");
	}
	fin = sal+da+hra;
	printf("Your final salary is %f",fin);
	return 0;
	
}
