/*Bank transaction using structs*/

#include <stdio.h>
#include <stdlib.h>

struct customer{
	int acc_no;
	char name[50];
	int balance;
}bank[10];

int transaction(int acc_no,int req_type,int amount,struct customer bank[]){
	int i;
	if (req_type == 0){
		for (i=0;i<10;i++){
			if (acc_no == bank[i].acc_no){
				bank[i].balance += amount;
				printf("Balance:- %d",bank[i].balance);
			}
		}
	}
	else if (req_type == 1) {
		for (i=0;i<10;i++){
			if (acc_no == bank[i].acc_no){
				if (bank[i].balance - amount > 0){
					bank[i].balance -= amount;
					printf("Balance:- %d",bank[i].balance);
					return 1;
				}
				else {
					printf("Balance:- %d",bank[i].balance);
					return 0;
				}
			}
		}
	}
}

int main(){
	int i,j,a,b;
	
	for (i=0;i<5;i++){
		printf("\n----------Enter the details of customer %d----------\n",i+1);
		printf("Enter the account number:- ");
		scanf("%d",&bank[i].acc_no);
		printf("Enter the name of the customer:- ");
		fflush(stdin);
		scanf("%s",bank[i].name);
		printf("Enter the balance:- ");
		scanf("%d",&bank[i].balance);
	}
	
	printf("\nEnter the account number for withdrawal:- ");
	scanf("%d",&a);
	printf("Enter the amount:- ");
	scanf("%d",&b);
	
	printf("\nTransaction status:- %d",transaction(a,1,b,bank));
	
}
