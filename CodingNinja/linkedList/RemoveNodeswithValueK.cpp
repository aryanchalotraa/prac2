//https://www.codingninjas.com/codestudio/problems/remove-all-nodes-with-value-k_1262145
#include<iostream>
#include<list>
#include "D:\Summar Training 2024\headerfiles\display_list.h"

using namespace std;
void removeNodes(list<int>&l,int k)
{
	l.remove(k);
}
int main()
{
	list<int> l{3,4,5,3,53,4,3};
	removeNodes(l,3);
	displayList(l);
}