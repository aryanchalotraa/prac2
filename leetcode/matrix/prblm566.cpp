//https://leetcode.com/problems/reshape-the-matrix/description/
#include <iostream>
#include <vector>
#include "D:\Summar Training 2024\headerfiles\display_vector.h"
//more space complexity
vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
	
	if(mat.size()*mat[0].size()!=r*c)
		return mat; //matrix can't be resized

	//save all the elments of the matrix as a 1d array
	vector<int> res;
	for(auto row:mat){
		for(auto col: row){
			res.push_back(col);
		}
	}

	int r1=0; //pointer to 1d array
	vector<vector<int>> result; //final result
	for(int i=0;i<r;i++){ //loop to mark the rows of the resultant matrix
		vector<int> row; //to store a single row
		for(int j=0;j<c;j++){ //loop marking the columns in the resultant matrix
			row.push_back(res[r1]); //inserting element in the row
			r1++; //increment the pointer of the 1d array
		}
		result.push_back(row); //insert row int the resultant matrix
	}

	return result;
}

//memory optimised
vector<vector<int>> op_matrixReshape(vector<vector<int>>& mat, int r, int c) {
		
	if(mat.size()*mat[0].size()!=r*c)
		return mat;

	vector<vector<int>> result; //final result
	int n=0; //keeps track of the no of elements covered
	for(int i=0;i<r;i++){ //loop to mark the rows of the resultant matrix
		vector<int> row; //to store a single row
		for(int j=0;j<c;j++){ //loop marking the no of columns in the resultant matrix
			int value=mat[n/mat[0].size()][n%mat[0].size()];
			//when n is a multiple of no of columns in mat -> it moves to the next row
			n++;
			row.push_back(value); //inserting element in the row
		}
		result.push_back(row); //insert row int the resultant matrix
	}

	return result;
}
/*
Understanding n / mat[0].size():
	n / mat[0].size() calculates the row index in mat.
	mat[0].size() returns the number of columns in mat.
	Dividing n by the number of columns gives the row number because as n increments, it will exceed the column size and move to the next row.

Understanding n % mat[0].size():
	n % mat[0].size() calculates the column index in mat.
	The modulo operation (%) gives the remainder of n when divided by the number of columns, effectively cycling through the column indices from 0 to mat[0].size() - 1.
*/
int main()
{
	vector<vector<int>> matrix {{1,2},{3,4}};
	matrix=matrixReshape(matrix,1,4);
	for(auto i: matrix)
	{
		displayVector(i);
	}
	cout<<"optimised:\n";
	matrix=op_matrixReshape(matrix,1,4);
	for(auto i: matrix)
	{
		displayVector(i);
	}
}