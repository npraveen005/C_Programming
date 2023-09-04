#include <stdio.h>;
int main(){
	int km,m,cm,mm;
	printf("Enter kilometers:- ");
	scanf("%d",&km);
	m=km*1000;
	cm=m*100;
	mm=cm*10;
	printf("Given kilometers in meters:- %d \n",m);
	printf("Given kilometers in centimeters:- %d \n",cm);
	printf("Given kilometers in millimeters:- %d \n",mm);
	return 0;
}
