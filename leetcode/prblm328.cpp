#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> l={3,5,2,7,5,56,7};
	list<int> e,o;
	int n=l.size();
	for(int i=1;i<=n;i++)
	{
	
		if(i%2==0){
			e.push_back(l.front());
			l.pop_front();
		}
		else
		{
			o.push_back(l.front());
			l.pop_front();
		}
	}
	
	cout<<"\neven\n";
	for(int i: o)
	{
		cout<<i<<" ";
	}
	cout<<"\neven\n";
	for(int i: e)
	{
		cout<<i<<" ";
	}

	cout<<"\nresult\n";
	for(int i: e)
	{
		o.push_back(i);
	}
	for(int i: o)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}