#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	
	cout<<"Enter elements in the vector: ";
	for (int i=0;i<5;i++)
	{
		cout<<"capacity: "<<v.capacity()<<endl;
	   int x;
		cin>>x;
		v.push_back(x);
		
	}
	cout<<"capacity: "<<v.capacity()<<endl;
	//it creates a new vector and with double size and older vector data is stored in the new array capacity= 0, 1, 1*2, 2*2, 4*2
	cout<<"Printing element: ";
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	v.pop_back();
	cout<<"Printing element after pop: ";
	for(int i=0;i<v.size();i++)
	{
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
	
	cout<<"First element: "<<v.front()<<endl;
	cout<<"Last element: "<<v.back()<<endl;
	cout<<"Size of vector: "<<v.size()<<endl;
	
	v.insert(v.begin()+1,88);
	cout<<"Printing element after insert: ";
	for(int i:v) //for each
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	v.reserve(4);//no effect 
	cout<<"Printing element after reserve: ";
	for(int i:v) //for each
	{
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	
	v.clear();
	cout<<"Printing element after clear: ";
	for(int i: v)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	cout<<"size: "<<v.size()<<endl;
	
	v.reserve(14);// set capacity to 14
	cout<<"capacity: "<<v.capacity()<<endl;
	
	v.shrink_to_fit(); //set capacity equal to the size of the vector
	cout<<"capacity: "<<v.capacity()<<endl;
	
	//another way to create vector
	vector <char> v1(4,'a'); //size 4 with all values as 'a'
	cout<<"Printing char vector: ";
	for(char i: v1)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
}