//https://www.codingninjas.com/codestudio/problems/binary-to-integer_2421938
#include<iostream>
#include<list>
#include<algorithm>
#include "D:\Summar Training 2024\headerfiles\display_list.h"
using namespace std;
int pow(int val, int p)
{
	int ans=1;
	for(int i=0;i<p;i++)
	{
		ans*=val;
	}
	return ans;
}
int binInt(list<int> &l)
{
	int ans=0;
	int n=l.size();
	for(int i=0;i<n;i++)
	{
		if(l.back()==1)
			ans+=pow(2,i);
		l.pop_back();
	}
	return ans;
}
int main()
{
	list<int> l {1,0,1,0,0,1};
	cout<<binInt(l)<<endl;
}

