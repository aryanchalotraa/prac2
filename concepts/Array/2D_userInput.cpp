#include<iostream>
using namespace std;
int main()
{
	cout<<"\nLet's Create a matrix: "<<endl;
	int row=0,col=0;
	cout<<"Enter no of rows: ";
	cin>>row;
	cout<<"Enter no of columns: ";
	cin>>col;
	
	int arr[row][col];
	for( int i=0;i<row;i++)
	{
		cout<<"Enter row "<<i+1<<endl;
		for (int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	//display
	cout<<"\nDisplaying the matirx: "<<endl;
	for( int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//add row
	int sum=0;
	int row_sum=0;
	cout<<"\nEnter the row to print its sum: ";
	cin>>row_sum;
	if(row_sum<1 || row_sum>row)
	{
		cout<<"Invalid row Number!\n";
	}
	else{
		for(int j=0;j<col;j++)
		{
			sum+=arr[row_sum-1][j];
		}
		cout<<"Sum: "<<sum<<endl;
	}
	
	//diagnal sum
	cout<<"\nDiagonal sum:\n";
	if(row ==col){
		int rsum=0,lsum=0;
		for(int i=0;i<row;i++)
		{
			for (int j=0;j<col;j++)
			{
				if (i==j)
				{
					rsum+=arr[i][j];
				}
				if(j==row-1-i)
				{
					lsum+=arr[i][j];
				}
			}
		}
		cout<<"Lsum: "<<lsum<<endl;
		cout<<"Rsum: "<<rsum<<endl;
	}
	else
	{
		cout<<"Not a square matrix (No diagonal elements)";
	}
}