#include <stdio.h>
int main(){
	int d,mon,y,days;
	printf("Enter the date in dd mm yyyy format:- ");
	scanf("%d %d %d",&d,&mon,&y);
	if (mon==1 || mon==3 || mon==5 || mon==7 || mon==8|| mon==10 ||mon==12){
		days=31;
	}
	else if(mon==4 || mon==6 ||mon==9 ||mon==11){
		days=30;
	}
	else{
		if (y%4==0 && (y%100!=0 || y%400==0)){
		days=29;
		}
		else {
		days=28;
		}
	}
	
	
	if (days==31){
		if (mon==12){
			y++;
			mon=1;
			d=0;
		}
		else{
			d++;
		}
	}
	else if (days==30){
		mon++;
		d=0;
	}
	else if (days==28){
		mon++;
		d=0;
	}
	
	printf("%d %d %d %d",d+1,mon,y,days);
}
