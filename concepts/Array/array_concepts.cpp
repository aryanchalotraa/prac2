#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
	//normal array
	//int arr[]={1,2,3,5};
	
	//stl arr
	array<int,4> a= {1,4,6,4};
	cout<<"size"<<a.size()<<endl;
	for(int i=0;i<a.size();i++)
	{
	   cout<<a[i]<<" ";
	}
	cout<<endl;
	
	cout<<"element at index: "<<a.at(2)<<endl;
	bool trueFalse=a.empty();
	cout<<"True or false: "<<trueFalse<<endl;
	bool empty =a.empty();
	cout<<"is array is empty or not: "<<empty<<endl;;
	cout<<"first element : "<<a.front()<<endl;
	cout<<"last element : "<<a.back()<<endl;
	 
	int c = count(a.begin(), a.end(), 4);
	cout << "Number of 4s in the array: " << c << endl;
    
    sort(a.begin(),a.end());
    cout<<"Sorted Array: ";
	//a.fill(0);
	for(int i=0;i<a.size();i++)
	{
	   cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
