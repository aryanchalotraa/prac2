#include<iostream>
using namespace std;
int main()
{
	//static 2d array
	int arr[3][3]=
	{
		{1,2,3},
		{7,8,9},
		{4,5,6}
	};
	for( int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}