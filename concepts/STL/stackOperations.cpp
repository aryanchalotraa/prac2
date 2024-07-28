#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int> s;
	char cont='y' ;
	do
	{
		cout<<"\nMenu:\n 1.Size\n 2.Insert\n 3.Delete\n 4.Top\n 5.Exit\n";
		cout<<"Enter your choice: ";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Size of stack: "<<s.size()<<endl;
				break;
			case 2:
				cout<<"Enter element to insert: ";
				int x;
				cin>>x;
				s.push(x);
				break;
			case 3:
				if(s.empty())
				{
					cout<<"Stack underflow!"<<endl;
				}
				else{
				s.pop();
				cout<<"Element deleted successfully! "<<endl;}
				break;
			case 4:
				if(s.empty())
				{
					cout<<"Stack underflow!"<<endl;
				}
				else{
					cout<<"Top element: "<<s.top()<<endl;
				}
				break;
			case 5:
				cout<<"~~~~~~ THANK YOU ~~~~~~"<<endl;
				break;
			default:
				cout<<"Invalid choice!"<<endl;
		}
		if (choice == 5)
		{
			break;
		}
		cout<<"Whether you want to enter another choice (y/n): ";
		cin>>cont;
	}while(cont=='y');
}