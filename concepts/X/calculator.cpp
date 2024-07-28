#include<iostream>
#include"D:\Summar Training 2024\headerfiles\calculator_class.h"
using namespace std;
void calculator::wlcm() //definition of a class function
{
	cout<<"~~~~ WELCOME ~~~~"<<endl;
}
int main()
{
	calculator obj;
	obj.wlcm();
	int choice =0;
	int num1;
	cout<<"Enter Number: ";
	cin>>num1;
	do
	{
		cout<<"\n~~~~~ Menu ~~~~~\n";
		cout<<"1.ADD \n2.Subtract \n3.Multiply \n4.Divide \n5.Remainder \n6.Exit Calculator\n";
		cout<<"Enter choice: ";
		cin>>choice;
		int num2;
		if(choice<6 && choice >0)
		{
			cout<<"Enter Number: ";
			cin>>num2;
		}
		switch(choice)
		{
			case 1:
				num1=obj.add(num1,num2);
				cout<<"Add: "<<num1<<endl;
				break;
			case 2:
				num1=obj.sub(num1,num2);
				cout<<"Sub: "<<num1<<endl;
				break;
			case 4:
				if(num2!=0){
					num1=obj.divide(num1,num2);
					cout<<"Divide: "<<num1<<endl;
				}
				else
				{
					cout<<"Division by zero"<<endl;
					num1=0;
				}
				break;
			case 3:
				num1=obj.multiply(num1,num2);
				cout<<"Multiply: "<<num1<<endl;
				break;
			case 5:
				num1=obj.remainder(num1,num2);
				cout<<"Remainder: "<<num1<<endl;
				break;
			case 6:
				cout<<"~~~~~ THANKS ~~~~~";
				break;
			default:
				cout<<"Invalid Choice! "<<endl;
				
		}
	}while(choice!=6);
	
	
}