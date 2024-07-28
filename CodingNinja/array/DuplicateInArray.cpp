//https://www.naukri.com/code360/problems/duplicate-in-array_893397?leftPanelTabValue=PROBLEM
#include<unordered_set>
#include <iostream>
#include <vector>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
	// Write your code here
	unordered_set<int> eleCount;
	for(auto i: arr){
		if (eleCount.find(i)==eleCount.end()){
			eleCount.insert(i);
		}
		else{
			return i;
		}
	}
	return -1;
	
}
