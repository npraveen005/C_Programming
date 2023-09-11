#include <stdio.h>
int main(){
	int a,b,c,d,e,perc;
	printf("Enter the marks of Physics:- ");
	scanf("%d",&a);
	printf("Enter the marks of Chemistry:- ");
	scanf("%d",&b);
	printf("Enter the marks of Biology:- ");
	scanf("%d",&c);
	printf("Enter the marks of Mathematics:- ");
	scanf("%d",&d);
	printf("Enter the marks of Computer:- ");
	scanf("%d",&e);
	perc=(a+b+c+d+e)/5;
	printf("The percentage of the student is:- %d \n",perc);
	
	if (perc>=90){
		printf("Grade A");
	}
	else if (perc>=80){
		printf("Grade B");
	}
	else if (perc>=70){
		printf("Grade C");
	}
	else if (perc>=60){
		printf("Grade D");
	}
	else if (perc>=40){
		printf("Grade E");
	}
	else if (perc<40){
		printf("Grade F");
	}
	
	return 0;
}
