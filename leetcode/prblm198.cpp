//https://leetcode.com/problems/house-robber/

#include<iostream>
#include<vector>
using namespace std;

int recurssion_rob(vector<int>& nums)
{
	int rob1=0, rob2=0;
	int max_rob=0;
	if(nums.size()==1){
			return nums[0];
	}
	else if(nums.empty()){
			return 0;
	}
	
	
	vector<int> sub_vector1(nums.begin() +2, nums.end());
	vector<int> sub_vector2(nums.begin() +1, nums.end());
	max_rob=max(nums[0]+recurssion_rob(sub_vector1),recurssion_rob(sub_vector2));
		
	return max_rob;
}
int rob1(vector<int>& nums) {
	//dp 
	vector<int> max_rob(nums.size(),0);
	max_rob[0]=nums[0];
	if(nums.size()>1){
		max_rob[1]=nums[1];
	}
	for(int i=2;i<nums.size();i++)
	{
		max_rob[i]=max(max_rob[i-1],nums[i]+max_rob[i-2]);
	}
	return max_rob[nums.size()-1];
}

int rob2(vector<int>&nums)
{
	//memory optimization in dp
	int rob1=0,rob2=0;
		for(int n: nums){
			int temp=max(n+rob1,rob2);
			rob1=rob2;
			rob2=temp;
		}
	return max(rob1,rob2);
}

int main()
{
	vector<int> vec={183,219,57,193,94,233,202,154,65,240,97,234,100,249,186,66,90,238,168,128,177,235,50,81,185,165,217,207,88,80,112,78,135,62,228,247,211};

    cout<<"brute force: "<<recurssion_rob(vec)<<endl;
	cout<<"dp: "<<rob1(vec)<<endl;
	cout<<"dp optimized: "<<rob2(vec)<<endl;
	
}