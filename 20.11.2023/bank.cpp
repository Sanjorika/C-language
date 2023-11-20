#include<stdio.h>
struct customer
{
	int acc;
	char name[50];
	float bal;
} c[10];
int transaction(int acc,int req,int amount,int i)
{
	if(req==0)
		if (c[i].bal + amount>200)
			return 1;
		else
			return 0;
	else if(req==1)
		if(c[i].bal - amount>200)
			return 1;
		else
			return 0;		
}
int bank(int acc,int req,int amount,int i)
{
	if(transaction(acc,req,amount,i)==1 && req==0)
		return c[i].bal + amount;
	else if(transaction(acc,req,amount,i)==1 && req==1)	
		return c[i].bal - amount;
}
int main()
{
	printf("Enter account number, name and balance");
	for (int i = 0; i < 10; i++)
        scanf("%d %s %f", &c[i].acc, c[i].name, &c[i].bal);
	int req,amount,acc,i;
	char name[50];
	printf("Deposit(=0) or Withdrawal(=1)");
	scanf("%d", &req);
	printf("Enter the amount");
	scanf("%d",&amount);
	printf("Enter the account number");
	scanf("%d",&acc);
	if(transaction(acc,req,amount,i)==0)
		printf("Invalid balance");
	else if(transaction(acc,req,amount,i)==1)
	{
		bank(acc,req,amount,i);
		printf("Account number: %d\n",acc);
		printf("Name of the customer: %s\n",name);
		printf("Available balance: %f\n",bank(acc,req,amount,i));	
	}
	return 0;		
}
