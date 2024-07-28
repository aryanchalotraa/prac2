//https://leetcode.com/problems/product-of-array-except-self/description/
#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int> nums) {
	//without using divison operator 
	vector<int> result(nums.size(),1);
	int product=1;
	for(int i=0;i<result.size();i++){
		result[i]=product; 
		product*=nums[i];
	}
	product=1;
	for(int i=nums.size()-1;i>=0;i--){
		result[i]*=product;
		product*=nums[i];
	}
	return result;
}
vector<int> brute_force_productExceptSelf(vector<int> nums) {
	//using division operator
	long long product =1;
	int zero_count=0;
	for(int i: nums){
		if (i==0){
			zero_count++;
		}
		else
			product*=i;
	}
	
	if (zero_count>1){
		vector<int> n(nums.size(),0);
		return n;
	}
	for(int i=0;i<nums.size();i++){
		if(zero_count==1){
			if(nums[i]!=0)
				nums[i]=0;
			else
				nums[i]=product;
		}
		else{
			nums[i]=product/nums[i];
		}
		
	}
	return nums;
}
int main()
{
	vector<int> result,v={-1,1,0,-3,3};
	result=brute_force_productExceptSelf(v);
	cout<<"Bruteforce: ";
	for(int i:result)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	result=productExceptSelf(v);
	cout<<"Optimised: ";
	for(int i:result)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}