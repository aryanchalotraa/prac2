#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<string> s;
	s.push("Ajay");
	s.push("Ajab");
	s.push("Gajab");
	s.push("Sajab");
	
	cout<<"Top element: "<<s.front()<<endl;
	cout<<"Size of Queue: "<<s.size()<<endl;
	
	s.pop();
	
	cout<<"Top element after dequeue: "<<s.front()<<endl;
	cout<<"Size of Queue: "<<s.size()<<endl;
	
	cout<<"If the queue is empty or not: "<<s.empty()<<endl;
	
	int n=s.size();
	for(int i=0; i<n;i++)
	{
		cout<<s.front()<<" ";
		s.pop();
	}
	cout<<endl;
}