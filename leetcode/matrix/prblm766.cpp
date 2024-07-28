//https://leetcode.com/problems/toeplitz-matrix/description/
#include <iostream>
#include <vector>

using namespace std;

bool isToeplitzMatrix(vector<vector<int>> matrix) {
	
	for(int row=0;row<matrix.size()-1;row++){
		for(int col=0;col<matrix[0].size()-1;col++){
			//comparing doagonal elements
			if(matrix[row][col]!=matrix[row+1][col+1]){
				return false;
			}
		}
	}
	return true;
}

int main()
{
	cout<<isToeplitzMatrix({{1,2,3,4},{5,1,2,3},{9,5,1,2}})<<endl;
}