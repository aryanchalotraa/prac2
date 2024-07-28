//https://www.naukri.com/code360/problems/total-negative-numbers-in-a-sorted-matrix_3161878?leftPanelTabValue=PROBLEM
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int countNegativeNumbers(vector<vector<int>> &mat)
{
	// Write your code here.
	int negCount=0;
	for(auto i: mat){
		int j=i.size()-1;
		for(j;j>=0;j--){
			if(i[j]>=0){
				break;
			}
			negCount++;
		}
	}
	return negCount;
}