//https://www.codingninjas.com/codestudio/problems/palindrom-linked-list_799352?leftPanelTab=0

#include<iostream>
#include<list>
using namespace std;
bool ispalindrome(list<int> l)
{
	int n=l.size()/2;
	for(int i=0 ;i<n;i++){
		if(l.front()!=l.back())
		{
			return false;
		}
		l.pop_back();
		l.pop_front();
	}
	return true;
}
int main()
{
	cout<<ispalindrome({1,3,4,3,1})<<endl;
	cout<<ispalindrome({5,3,3,5})<<endl;
	cout<<ispalindrome({1,3,4,4,1})<<endl;
}