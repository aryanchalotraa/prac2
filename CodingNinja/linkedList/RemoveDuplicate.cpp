//https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-unsorted-linked-list_1069331
#include<iostream>
#include<list>
#include<unordered_set>
#include "D:\Summar Training 2024\headerfiles\display_list.h"
using namespace std;
void removeDup(list<int> &l)
{
	unordered_set<int> check;
	for(list<int>::iterator i=l.begin();i!=l.end();i++)
	{
		if(check.find(*i)==check.end()) //if the value not in set
		{
			check.insert(*i); //insert value into the set
		}
		else //value already in set
		{
			l.erase(i); //remove the duplicate value
		}
	}
}
int main()
{
	list<int> l={4, 2, 4 ,2 ,6 ,2};
	removeDup(l);
	displayList(l);
}