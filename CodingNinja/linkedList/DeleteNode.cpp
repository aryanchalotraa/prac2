//https://www.naukri.com/code360/problems/delete-node-in-ll_5881
#include<iostream>
#include<list>
#include "D:\Summar Training 2024\headerfiles\display_list.h"
using namespace std;
void delNode(list<int> &l,int pos)
{
	if(pos>=l.size())
	{
		list<int>:: iterator p=l.begin();
		advance(p,pos);
		l.erase(p);
	}
}
int main()
{
	list<int> l {1,3,4,5,6,2};
	delNode(l,6);
	displayList(l);
}

