#include<iostream>
#include<deque> //double ended queue
using namespace std;
int main()
{
	//deque means you can perform push and pop operation from both end.
	deque<int> d;
	//insertion
	d.push_back(10);
	d.push_back(5);
	d.push_front(11);
	d.push_front(8);
	for(int i: d)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	//delete
	d.pop_back();
	d.pop_back();
	for(int i: d)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	d.pop_front();
	d.pop_front();
	cout<<"printing array: ";
	for(int i:d)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<"front: "<<d.front()<<endl;
	cout<<"back: "<<d.back()<<endl;
	cout<<"Empty or not: "<<d.empty()<<endl;
	cout<<"Before erase: "<<d.size()<<endl;
	
	d.erase(d.begin(),d.begin()+1);
	for(int i:d)
	{
		cout<<i<<" ";
	}
	cout<<"After erase: "<<d.size()<<endl;
	
}