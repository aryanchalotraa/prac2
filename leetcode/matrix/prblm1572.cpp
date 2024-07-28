//https://leetcode.com/problems/matrix-diagonal-sum/description/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//o(n)
int optimized_diagonalSum(vector<vector<int>> mat) {
		long sum=0;
		int r=mat.size()/2;
		for(int i=0;i<r;i++){
				sum+=mat[i][i];
				sum+=mat[i][mat.size()-1-i];
				sum+=mat[mat.size()-1-i][i];
				sum+=mat[mat.size()-1-i][mat.size()-1-i];
		}
		if(mat.size()%2!=0)
			sum+=mat[r][r];
		return sum;
}

//o(n^2)
int diagonalSum(vector<vector<int>> mat) {
		long sum=0;
		for(int i=0;i<mat.size();i++){
			for(int j=0;j<mat.size();j++){
					if(i==j || i+j==mat.size()-1 ){
						sum+=mat[i][j];
					}
				   
			}
		}
		return sum;
}
int main()
{
	cout<<diagonalSum({{4,5},{1,3}})<<endl;
	cout<<optimized_diagonalSum({{4,5},{1,3}})<<endl;
}
