#include <stdio.h>;
int main(){
	int a,b,c,d,e,perc;
	printf("Enter the marks of subject 1:- ");
	scanf("%d",&a);
	printf("Enter the marks of subject 2:- ");
	scanf("%d",&b);
	printf("Enter the marks of subject 3:- ");
	scanf("%d",&c);
	printf("Enter the marks of subject 4:- ");
	scanf("%d",&d);
	printf("Enter the marks of subject 5:- ");
	scanf("%d",&e);
	perc=(a+b+c+d+e)/5;
	printf("The percentage of the student is:- %d",perc);
	return 0;
}
