//https://www.naukri.com/code360/problems/stocks-are-profitable_893405?leftPanelTabValue=PROBLEM
#include <iostream>
#include <vector>
using namespace std;
int maximumProfit(vector<int> prices){
	// Write your code here.
	int buy=prices[0];
	int maxp=0;
	for(int i=1;i<prices.size();i++){
		buy=min(buy,prices[i]);
		maxp=max(maxp,prices[i]-buy);
	}
	return maxp;
}
int main()
{
	cout<<maximumProfit({1,2,3,4});
}