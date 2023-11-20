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
		if (c[i].bal+amount>200)
			return 1;
		else
			return 0;
	else if(req==1)
		if(c[i].bal-amount>200)
			return 1;
		else
			return 0;		
}
float bank(int acc,int req,int amount,int i)
{
	if(transaction(acc,req,amount,i)==1 && req==0)
		return c[i].bal+amount;
	else if(transaction(acc,req,amount,i)==1 && req==1)	
		return c[i].bal-amount;
}
int main()
{
	int req,amount,acc,x=-1,i;
	printf("Enter account number, name and balance");
	for (i=0;i<10;i++)
        scanf("%d %s %f",&c[i].acc,c[i].name,&c[i].bal);
	char name[50];
	printf("Deposit(=0) or Withdrawal(=1)");
	scanf("%d", &req);
	if(req!=0 && req!=1)
	{
		printf("Error");
		return 0;
	}
	printf("Enter the amount");
	scanf("%d",&amount);
	printf("Enter the account number");
	scanf("%d",&acc);
	for(i=0;i<10;i++)
	{
		if(c[i].acc==acc)
		x=i;
	}
	if(x==-1)
		printf("Invalid account");
	else if(transaction(acc,req,amount,x)==0)
		printf("Invalid balance");
	else if(transaction(acc,req,amount,x)==1)
	{
		bank(acc,req,amount,x);
		printf("Account number: %d\n",c[x].acc);
		printf("Name of the customer: %s\n",c[x].name);
		printf("Available balance: %f\n",c[x].bal);	
	}
	return 0;		
}
