//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include<iostream>
#include<vector>    
using namespace std;
	 
int maxProfit(vector<int>& prices) {
		ios_base::sync_with_stdio(false); 
		cin.tie(NULL); 
		cout.tie(NULL);
		/*
		int profit=0;
		for(int i=0;i<prices.size();i++){
			int buy=prices[i]; 
			for(int j=i+1;j<prices.size();j++){
						if(prices[j]-buy>profit){
							profit=prices[j]-buy;
						}
				} 
		}
		return profit;
		
		int profit=0;
		int buy=prices[0];
		for(int i=1;i<prices.size();i++){
			profit=max(prices[i]-buy,profit);
			if(buy>prices[i] ){
				buy=prices[i];
			}
		}
		*/

		int profit=0;
		int buy=prices[0];
		for(int i=0;i<prices.size()-1;i++){
			if(buy>prices[i] ){
				buy=prices[i];
			}
			profit=max(prices[i+1]-buy,profit);
		   
		}
		return profit;
}

int maxProfit1(vector<int>& prices) {
		ios_base::sync_with_stdio(false); 
		cin.tie(NULL); 
		cout.tie(NULL);
		int buy=prices[0];
		int profit=0;
		for(int i=0;i<prices.size();i++){
			profit=max(prices[i]-buy,profit);
			buy=min(buy,prices[i]);
		}
		return profit;
}

int main()
{
	vector<int> prices={2,1,4};
	cout<<maxProfit1(prices)<<endl;
}