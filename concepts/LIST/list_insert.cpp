#include<iostream>
#include<list>
using namespace std;

void insertinto(list<int>& l,int ele)
{
	if(l.empty())
	{
		l.push_front(ele);
	}
	else
	{
		list<int>:: iterator pos=l.begin();
		int n;
		cout<<"Enter the postion: ";
		cin>>n;
		if(n<=l.size()){
			advance(pos,n-1);
			l.insert(pos,ele);
		}
		else
		{
			l.push_back(ele);
		}
		
	}
}
void display(list<int>& l)
{
	cout<<"Displaying the List: \n";
	for(auto i: l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}

void delete_ele(list<int>& l,int val)
{
	l.remove(val);
}

void delete_pos(list<int>& l,int n)
{
	list<int>::iterator pos=l.begin();
	advance(pos,n);
	l.remove(*pos);
}
void mergeList(list<int>&l)
{
	list<int> templ;
	cout<<"Enter the size of list to be merged: ";
	int n;
	cin>>n;
	if(n<0)
	{
		cout<<"Invalid size entered!"<<endl;
	}
	else{
		int temp;
		cout<<"Enter the list elments: \n";
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			templ.push_back(temp);
		}
		l.merge(templ);
		cout<<"Merge sucessful!\n";
		display(l);
	}
}
int main()
{
	list<int> l;
	char choice='y';
	
	do
	{
		//displaying menu
		cout<<"\n\n~~~~~~Menu~~~~~~\n";
		cout<<"1.INSERT ELEMENT \n2.DELETE ELEMENT \n3.DELETE BY POSITION \n4.REVERSE LIST \n";
		cout<<"5.SORT \n6.Remove consecutive duplicate elements \n7.List is empty or not \n8.SIZE \n9.Clear List \n10.Merge \n11.EXIT\n";
	
		int ele; //to take the input
		
		//taking choice
		cout<<"Enter the choice: ";
		int ch;
		cin>>ch;
		
		//exit the loop
		if(ch==11)
		{
			break;
		}
		
		//checking the choice 
		switch(ch){
			case 1:
				//insert
				cout<<"Enter the element to insert: ";
				cin>>ele;
				insertinto(l,ele);
				display(l);
				break;
			case 2:
				//delete
				cout<<"Enter the element to delete: ";
				cin>>ele;
				delete_ele(l,ele);
				display(l);
				break;
			case 3:
				cout<<"Enter the element pos to delete: ";
				cin>>ele;
				delete_pos(l,ele);
				display(l);
				break;
			case 4:
				l.reverse();
				display(l);
				break;
			case 5:
				l.sort();
				display(l);
				break;
			case 6:
				//remove consecutive duplicate elements
				l.unique();
				display(l);
				break;
			case 7:
				//check if the list is empty or not
				if(l.empty())
				{
					cout<<"List is empty\n";
				}
				else
				{
					cout<<"List is not empty\n";
				}
				break;
			case 8:
				cout<<"Size of list: "<<l.size();
				break;
			case 9:
				l.clear();
				cout<<"List is cleared sucessfully!\n";
				display(l);
				break;
			case 10:
				mergeList(l);
				break;
			default:
				cout<<"Invalid choice! \n";
		}
		
		cout<<"Do you wish to perform another choice(y/n): ";
		cin>>choice;
	}while(choice=='y');
}