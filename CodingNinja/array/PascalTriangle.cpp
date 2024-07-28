//https://www.naukri.com/code360/problems/pascal-s-triangle_1089580?leftPanelTabValue=PROBLEM
#include <iostream>
#include <vector>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> result;
  result.push_back({1}); //pushing the the first row
  for(int i=1;i<n;i++){
	  vector<long long int> row;
	  
	  for(int j=0;j<=i;j++){
		long long temp;
		if (j==0){
		  temp=result[i-1][j];  //first element of the row
		} 
		else if( j==i){
		  temp=result[i-1][j-1]; //last element of the row
		}
		else 
		{
		  temp = result[i - 1][j-1] + result[i - 1][j]; //middle elements of the row
		}
		row.push_back(temp);
	  }
	  
	  result.push_back(row); //adding row in final result
  }
  return result;
}
int main()
{
	vector<vector<long long int>> pascaltri;
	pascaltri=printPascal(6);
	for(auto i:pascaltri)
	{
		for (auto j : i)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
