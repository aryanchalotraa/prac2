//https://leetcode.com/problems/richest-customer-wealth/description/
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int maximumWealth(vector<vector<int>> accounts) {
	int m=0;
	for (auto i: accounts){
		m=max(accumulate(i.begin(),i.end(),0),m);
	}
	return m;
}
int main()
{
	cout<<maximumWealth({{3,5,1},{4,6}})<<endl;
}
