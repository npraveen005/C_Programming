#include <stdio.h>;
#include <math.h>;
int main()
{
	int a,b,c,add,sub,mult,div,power,sqrt1,sqrt2;
	/*printf("Enter the s.no of the operation;-");
	printf("1.Addition");
	printf("2.Subraction");
	printf("3.Multiplication");
	printf("4.Division");
	scanf("%d",c);*/
	printf("Enter two numbers:- ");
	scanf("%d %d",&a,&b);
	add=a+b;
	sub=a-b;
	mult=a*b;
	div=a/b;
	power=pow(a,b);
	sqrt1=sqrt(a);
	sqrt2=sqrt(b);
	printf("The value after adding:- %d \n",add);
	printf("The value after subracting:- %d \n",sub);
	printf("The value after multiplying:- %d \n",mult);
	printf("The value after dividing:- %d \n",div);
	printf("The value of first number to the power of the second number:- %d \n",power);
	printf("Square root of number 1:- %d \n",sqrt1);
	printf("Square root of number 2:- %d \n",sqrt2);
	return 0;
	
}
