//https://www.naukri.com/code360/problems/ninja-and-sorted-arrays_1214628
#include<algorithm>
#include<iostream>
#include<vector> 
using namespace std;
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	for(int i=m;i<n+m;i++){
		arr1[i]=arr2[i-m];
	}
	stable_sort(arr1.begin(),arr1.end());
	return arr1;
}