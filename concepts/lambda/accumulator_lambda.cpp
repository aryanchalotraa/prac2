#include<iostream>
#include<vector>
#include<numeric> //for accumulate
#include<algorithm>
using namespace std;
int main()
{
	vector<int> nums={1,2,3,4,5};
	
	//using accumulate with a lambda to sum up the elements
	int sum = accumulate(nums.begin(),nums.end(),0,[](int total, int n)
	{
		//cout<<total<<" "<<n<<endl;
		return total+n;
	});
	cout<<"Sum: "<<sum<<endl;
	
	int total=0;
	for_each(nums.begin(),nums.end(),[&total](int n)
	 {
	 	total+=n;
		
	 }); 
	cout<<"Sum: "<<total<<endl;
	
	auto sum1=[](const vector<int>& nums)  
	 {  //const will ensure that the original vector doesn't changes
		int total=0;
	 	for(int i:nums)
		{
			total+=i;
		}
		return total;
	 };
	cout<<"Sum: "<<sum1(nums)<<endl;
	
}