//https://www.naukri.com/code360/problems/move-zeros-to-left_1094877?leftPanelTabValue=PROBLEM
#include <iostream>
#include <queue>
using namespace std;
void moveZerosToLeft(int *arr, int n) 
{
	// Write your code here
	int reader=n-1,writer=n-1;
	while(reader>=0){
		if(arr[reader]!=0){
			swap(arr[reader],arr[writer]);
			writer--;
		}
		reader--;
	}
	for(int i=0;i<=writer;i++){
		arr[i]=0;
	}
}
void container_moveZerosToLeft(int *arr, int n) 
{
	int zero_c=0;
	queue<int> nonZero;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			nonZero.push(arr[i]);
		}
		else{
			zero_c++;
		}
	}
	for(int i=0;i<zero_c;i++){
		arr[i]=0;
	}
	for(int i=zero_c;i<n;i++){
		arr[i]=nonZero.front();
		nonZero.pop();
	}
}
void bf_moveZerosToLeft(int *arr, int n) 
{
	int i=1;
	while(i<n){
		if(arr[i]==0){
			 int j=i;
			 while(j>0 && arr[j-1]!=0){
				 swap(arr[j],arr[j-1]);
				 j--;
			 }
		};
		i++;
	}
}