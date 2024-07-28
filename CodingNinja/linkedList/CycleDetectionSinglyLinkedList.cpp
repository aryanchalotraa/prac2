//https://www.naukri.com/code360/problems/cycle-detection-in-a-singly-linked-list_628974?leftPanelTabValue=PROBLEM
#include<iostream>
#include<unordered_set>
#include "D:\Summar Training 2024\headerfiles\Node.h"
using namespace std;

bool detectCycle(Node *head)
{
	//	Write your code here
	unordered_set<int> visited;
	Node *temp=head;
	while(temp!=nullptr){
		if(visited.find(temp->data)==visited.end()){
			visited.insert(temp->data);
		}
		else{
		   
			return true;
		}
		temp=temp->next;
	}
	return false;
}