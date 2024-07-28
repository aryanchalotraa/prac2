//https://www.naukri.com/code360/problems/intersection-of-linked-list_630457?leftPanelTabValue=PROBLEM
#include<unordered_set>
#include "D:\Summar Training 2024\headerfiles\Node.h"
using namespace std;
Node* findIntersection(Node *firstHead, Node *secondHead)
{
	//Write your code here
	Node * temp1=firstHead;
	unordered_set<Node*> firstv;
	while(temp1!=nullptr ){
		firstv.insert(temp1); //save all the pointer of first list in the set
		temp1=temp1->next; 
		
	}
	temp1=secondHead;
	while(temp1!=nullptr){
		if(firstv.find(temp1)!=firstv.end()){
			//if any pointer of first list matches the second list return that pointer
			return temp1;
		}
		temp1=temp1->next;
	}
	return nullptr;
}