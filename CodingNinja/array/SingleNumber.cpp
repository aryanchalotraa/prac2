//https://www.naukri.com/code360/problems/occurs-once_1214969?leftPanelTabValue=PROBLEM
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int occursOnce(vector<int> &a, int n){
	// Write your code here.
	int single_element=0;
	//iterating the vector and performing xor operation
	for_each(a.begin(),a.end(),[&single_element](int i){single_element^=i;});
	return single_element;
}