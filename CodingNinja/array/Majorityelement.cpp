//https://www.naukri.com/code360/problems/majority-element_842495?leftPanelTabValue=PROBLEM
#include <iostream>
#include <unordered_map>
using namespace std;
int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int majority=floor(n/2);
	unordered_map<int,int> eleCount;
	for(int i=0;i<n;i++){
		eleCount[arr[i]]++;
		if(eleCount[arr[i]]>majority){
			return arr[i] ;
		}
	}
	return -1;
}