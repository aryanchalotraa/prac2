//https://leetcode.com/problems/special-positions-in-a-binary-matrix/description/
#include <iostream>
#include <vector>
#include <algorithm>
#include "D:\Summar Training 2024\headerfiles\display_vector.h"
using namespace std;
int numSpecial(vector<vector<int>> mat) {
	int ans=0;
	for(int row=0;row<mat.size();row++){
		int col;
		int flag=false;
		int rc=0; //to check the count of 1s in the row 
		int c=0;
		for( col=0;col<mat[0].size();col++){
			if(mat[row][col]==1){
				flag=true;
				c=col; //save the column no of 1
				rc++;
			}
		}
		if(flag && rc==1){ //if there exist only one 1 in the row
			//check if the column contains any other 1 or not
			for(int r=0;r<mat.size();r++){
				if(mat[r][c]==1 && r!=row){
					flag=false;
					break;
				}
			}
			if(flag){
				ans++;
			}
		}
	}
	return ans;
}

int main()
{
	cout<<numSpecial({{0,0,0,1},{1,0,0,0},{0,1,1,0},{0,0,0,0}})<<endl;
}