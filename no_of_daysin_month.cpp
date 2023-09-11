#include <stdio.h>
int main(){
	int year, mon;
	printf("Enter the year:- ");
	scanf("%d",&year);
	printf("Enter the month number:- ");
	scanf("%d",&mon);
	
	if (mon==1 || mon==3 || mon==5 || mon==7 || mon==8|| mon==10 ||mon==12){
		printf("31 Days");
	}
	else if(mon==4 || mon==6 ||mon==9 ||mon==11){
		printf("30 Days");
	}
	else{
		if (year%4==0 && (year%100!=0 || year%400==0)){
		printf("29 Days");
		}
		else {
		printf("28 Days");
		}
	}
	return 0;
}
