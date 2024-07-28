/*
define the bankaccount class with private mmembers accountHolderName and balance.
provides a constructor to initialize these members.
Declares member functions for deposting, withdrawing, and displaying account information

main.cpp
implements the constructor and member functions of the bankAccount class
In the main function, creates an instance of BankAccount, performs depostit and withdrawal operations, 
and display the account info before and after the transcation
*/
#include<iostream>
using namespace std;
class bankAccount
{
	string accountHolderName;
	int balance;
	public:
	bankAccount(string name, int b)
	{
		this->accountHolderName=name;
		this ->balance=b;
	}
	
	void deposit(int amt)
	{
		if(amt<0)
		{
			cout<<"Invalid amount\n";
		}
		else{
		balance +=amt;
		cout<<"Deposit Successful!"<<endl;}
	}
	void withdraw(int amt)
	{
		if (amt<=balance)
		{
			if(amt<0)
			{
				cout<<"Invalid amount\n";
			}
			else{
				this->balance-=amt;
				cout<<"Withdraw Successful!"<<endl;
			}
		}
		else
		{
			cout<<"Insufficient balance!\n";
		}
	}
	void get_balance()
	{
		cout<<"Balance: "<<balance<<endl;
	}
	void get_name()
	{
		cout<<"Name: "<<accountHolderName<<endl;
	}
	
};
int main()
{
	bankAccount p1("Antra",500);
	int choice=0;
	do
	{
		cout<<"\n\nMenu: \n1.deposit \n2.withdraw \n3.balance \n4.Account Holder Name \n5.exit\n";
		cout<<"Enter choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1: 
				int n;
				cout<<"Enter the amount: ";
				cin>>n;
				p1.deposit(n);
				p1.get_balance();
				break;
			case 2:
				int m;
				cout<<"Enter the amount: ";
				cin>>m;
				p1.withdraw(m);
				p1.get_balance();
				break;
			case 3:
				p1.get_balance();
				break;
			case 4: 
				p1.get_name();
				break;
			case 5:
				break;
			default:
				cout<<"Invalid choice!"<<endl;
			 
		}
	}while(choice !=5);
}
