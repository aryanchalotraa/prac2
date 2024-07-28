#include<iostream>
#include<list> //doubly linked list
using namespace std;
int main(){
	list<int> l {2,3,4,6};
	l.push_back(10);
	l.push_back(10);
	l.push_back(11);
	l.push_front(12);
	l.push_front(10);
	for(int i: l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	// front
	cout<<"Front element: "<<l.front()<<endl;
	//back
	cout<<"Last element: "<<l.back()<<endl;
	
	//iterator
	list<int>::iterator itrr=l.begin();
	++itrr;
	cout<<"second element: "<<*itrr<<endl;
	
	//display elements
	cout<<"Odd elements:\n";
	list<int> ::iterator itr1=l.begin();
	for(int i=1;i<=l.size();i+=2)
	{
		cout<<"Element"<<i<<" : "<<*itr1<<endl;
		advance(itr1,2);
	}
	
	//unique 
	l.unique();
	cout<<"unique"<<endl;
	for(int i: l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	//reverse
	l.reverse();
	cout<<"reverse: "<<endl;
	for(int i: l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	//pop
	l.pop_back();
	cout<<"Removed an element from back: ";
	for(int i: l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"Removed an element from front: ";
	l.pop_front();
	for(int i: l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	//inserting element at middle
	cout<<"After inserting 4: \n";
	list<int>:: iterator itr=l.begin();
	advance(itr,2);
	l.insert(itr,4);
	for(int i: l)
	{
		cout<<i<<" "; 
	}
	cout<<endl;
	
	//erase
	l.erase(l.begin());
	cout<<"After erase: ";
	for(int i: l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	//size
	cout<<"Size if list: "<<l.size()<<endl;
	
	//resize
	l.resize(2);
	cout<<"Size if list after resize: "<<l.size()<<endl;
	for(int i: l)
	{
		cout<<i<<" "; 
	}
	cout<<endl;
	
	//merge 2 lists 
	list<int> l2 {44,66,7};
	l.merge(l2); //l2 would be empty after merge
	for(int i: l)
	{
		cout<<i<<" "; 
	}
	cout<<endl;
	
	l.clear(); //clears all the elements form the list
	
}
