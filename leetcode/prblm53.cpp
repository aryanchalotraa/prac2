//https://leetcode.com/problems/maximum-subarray/

#include<iostream>
#include<vector>
using namespace std;

int bruteforce_max_subarray(vector<int>& nums)
{
	int max_sum=nums[0];
	for(int i=0;i<nums.size();i++)
	{
		int arr_sum=0;
		for(int j=i;j<nums.size();j++)
		{
			arr_sum+=nums[j];
			if (max_sum<arr_sum)
			{
				max_sum=arr_sum;
			}
		}
	}
	return max_sum;
}

int max_subarray(vector<int>& nums)
{
	int max_sum=nums[0];
	int current_arr_sum=0;
	for(int i: nums)
	{
		current_arr_sum += i;
		max_sum=max(current_arr_sum,max_sum);
		if (current_arr_sum<0)
		{
			current_arr_sum=0;
		}
	}
	return max_sum;
}

int max_subarray1(vector<int>& nums)
{
	int max_sum=nums[0];
	int current_arr_sum=0;
	for(int i: nums)
	{
		current_arr_sum=max(i,i+current_arr_sum);
		max_sum=max(max_sum,current_arr_sum);
	
	}
	return max_sum;
}


int main()
{
	vector<int> arr={0,1,0,1,1,0,1,0,1,1,1,1,0};
	cout<<max_subarray1(arr)<<endl;
	cout<<bruteforce_max_subarray(arr)<<endl;
	cout<<max_subarray(arr)<<endl;
}









