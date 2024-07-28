//https://www.naukri.com/code360/problems/middle-of-linked-list_973250
#include<iostream>
#include<list>
#include "D:\Summar Training 2024\headerfiles\display_list.h"
using namespace std;
void middleNode(list<int> &l)
{
	for(int i=0;i<=l.size()/2;i++)
	{
		l.erase(l.begin());
	}
}
int main()
{
	list<int> l {1,3,4,5,6};
	middleNode(l);
	displayList(l);
}

