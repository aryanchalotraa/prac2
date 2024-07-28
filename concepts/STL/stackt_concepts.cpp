#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<string> s;
	s.push("Ajay");
	s.push("Ajab");
	s.push("Gajab");
	s.push("Sajab");
	
	cout<<"Top element: "<<s.top()<<endl;
	cout<<"Size of Stack: "<<s.size()<<endl;
	
	s.pop();
	
	cout<<"Top element after pop: "<<s.top()<<endl;
	cout<<"Size of Stack: "<<s.size()<<endl;
	
	cout<<"If the stack is empty or not: "<<s.empty()<<endl;
	
	cout<<"emplace: "<<s.emplace("as")<<endl;
	cout<<"Top element after pop: "<<s.top()<<endl;
	cout<<"Size of Stack: "<<s.size()<<endl;
}