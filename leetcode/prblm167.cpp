//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted
#include<iostream>
#include<vector>    
using namespace std;

vector<int> bruteforce_twoSum(vector<int>& nums, int target) {
		for(int i=0;i<nums.size();i++){
			for(int j=nums.size()-1;j>i;j--){
				if (nums[j]+nums[i]==target){
					return {i+1,j+1};
				}
			}
		}
		return {};
}

vector<int> binSearch_twoSum(vector<int>& nums, int target) {
	  ios_base::sync_with_stdio(false);
	  cin.tie(NULL);
	  cout.tie(NULL);
	  for (int i=0;i<nums.size();i++)
		{
			int ele=target - nums[i];
			int r=nums.size()-1;
			int l=i+1;
			while(l<=r)
			{
				int mid=(l+r)/2;
				if(nums[mid]==ele)
				{
					return {i+1,mid+1};
				}
				else if(nums[mid]>ele)
				{
					r=mid-1; //left
				}
				else
				{
					l=mid+1 ; //right 
				}
			}
		}
		return {};
}
	

vector<int> twoPointer_twoSum(vector<int>& nums, int target) {
	int l=0;
	int u=nums.size()-1;
	while(l<u){
		int sum=nums[l]+nums[u];
		
		if (sum==target){
			return {l+1,u+1};
		}
		else if(sum<target){
			l++;
		}
		else{
			u--;
		}

	}
	return {};
}



int main()
{
	vector<int> vec={2,7,11,15};
	int target =9;
	
	vector<int> result;
	result=bruteforce_twoSum(vec,target);
	cout<<"bruteforce: "<<result[0]<<" , "<<result[1]<<endl;
	result=binSearch_twoSum(vec,target);
	cout<<"binsearch: "<<result[0]<<" , "<<result[1]<<endl;
	result=twoPointer_twoSum(vec,target);
	cout<<"2 pointer: "<<result[0]<<" , "<<result[1]<<endl;
}