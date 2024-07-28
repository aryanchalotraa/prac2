#include<iostream>
#include<deque>
#include "D:\Summar Training 2024\headerfiles\create_vector.h"
#include "D:\Summar Training 2024\headerfiles\display_vector.h"
using namespace std;
int main(){
	vector<int> arr={1,2,3,4,5,6,7};
	
	for(int i:arr)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	//2 pointer approach save the results
	int j=0;
	int n=arr.size();
	while(j<n)
	{
		int temp=arr[arr.size()-1];
		for(int i=arr.size()-1;i>0;i--)
		{
			arr[i]=arr[i-1];	
		}
		arr[0]=temp;
		for(int k: arr)
		{
			cout<<k<<" ";
		}
		cout<<endl;
		j++;
	}
	/*
	//just printing the result not saving 
	for(int i=arr.size()-1;i>0;i-=1)
	{   
		for(int j=i;j<arr.size();j++){
			cout<<arr[j]<<" ";
		}
		for(int j=0;j<i;j++)
		{
			cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
	
	
	/*
	//using dequeue and saving the result
	dequeue<int> arr1={1,2,3,4,5,6,7};
	for(int i=0;i<arr1.size();i++)
	{
		cout<<arr1[i]<<" ";
		cout<<endl;
		int x=arr1.back();
		arr1.pop_back();
		arr1.push_front(x);
	}
	*/
	
}