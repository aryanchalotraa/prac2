//https://www.codingninjas.com/codestudio/problems/merge-two-sorted-linked-lists_800332
#include<iostream>
#include<list>
#include "D:\Summar Training 2024\headerfiles\display_list.h"
using namespace std;

int main()
{
	list<int> l2 {1,3,6,10};
	list<int> l1 {5,19};
	l1.merge(l2);
	displayList(l1);
}

