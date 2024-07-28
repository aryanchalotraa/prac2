//https://leetcode.com/problems/two-sum/

#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> hashMap_twoSum(vector<int>& nums, int target) {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		map<int,int> visited;
		for(int i=0;i<nums.size();i++){
		   int diff= target-nums[i];
		   if(visited.find(diff)==visited.end()){
				visited[nums[i]]=i;
		   }
		   else{
				return {visited[diff],i};
		   }
		}
		return {0,0};
}

vector<int> bruteforce_twoSum(vector<int>& nums, int target) {
	for(int i=0;i<nums.size();i++){
		for(int j=i+1;j<nums.size();j++){
			if(nums[i]+nums[j]==target){
				return {i,j};
			}
		}
	}
	return {0,0};
}

int main()
{
	vector<int> vec={2,7,11,15};
	int target =9;
	
	vector<int> result;
	result=bruteforce_twoSum(vec,target);
	cout<<"bruteforce: "<<result[0]<<" , "<<result[1]<<endl;
	result=hashMap_twoSum(vec,target);
	cout<<"HashMap: "<<result[0]<<" , "<<result[1]<<endl;
}