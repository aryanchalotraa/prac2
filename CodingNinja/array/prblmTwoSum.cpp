#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int,int>> twoSum(vector<int> arr, int target, int n)
{
	// Resultant Vector. 
	vector<pair<int,int>> sum;
	//sort the given array
	sort(arr.begin(),arr.end());
	//intialise lower and upper pointer
	int l=0,u=n-1;
	//traverse the array with tow pointers
	while(l<u){
		//if the sum of element at low pointer  and upper pointer = target, add to result
		if(arr[l]+arr[u]==target){
			sum.push_back({arr[l],arr[u]});
			l++;
			u--;
		}
		else if(arr[l]+arr[u]>target){
			u--; //decrement the upper pointer
		}
		else{
			l++; //increment the lp
		}
	}

	//if the vector is empyt insert {-1,-1}
	if(sum.empty()){
		sum.push_back({-1,-1}); 
	}
	return sum;
}

int main()
{
	vector<pair<int,int>> sum;
	sum=twoSum({3,4,5,2,2,1},6,6);
	for(auto i: sum)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
}