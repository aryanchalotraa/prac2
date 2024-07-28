//https://leetcode.com/problems/lucky-numbers-in-a-matrix/description/
#include <iostream>
#include <vector>
#include "D:\Summar Training 2024\headerfiles\display_vector.h"
using namespace std;

vector<int> luckyNumbers (vector<vector<int>> matrix) {
	vector<int> res;
	for (int row=0;row<matrix.size();row++){
		
		int minr=matrix[row][0];  //store the min ele of the row 
		int c=0;  //store the column no of the min element of the row
		for(int col=0;col<matrix[0].size();col++){
			//finding the min element
			if(matrix[row][col]<minr){
				c=col;
				minr=matrix[row][col];
			}
		}
		//check if the min element of the row is the max of the column
		bool flag=true;
		for(int r=0;r<matrix.size();r++){
			if (minr<matrix[r][c]){
				flag=false;
			}
		}
		if(flag){
			res.push_back(minr); //save the lucky number
		}
	}
	return res;
	
}
int main(){
	vector<int> luckyno = luckyNumbers({{3,7,8},{9,11,13},{15,16,17}});
	displayVector(luckyno);
}