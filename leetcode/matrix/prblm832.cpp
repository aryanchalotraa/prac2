//https://leetcode.com/problems/flipping-an-image/description/
#include <iostream>
#include <vector>
#include <algorithm>
#include "D:\Summar Training 2024\headerfiles\display_vector.h"
using namespace std;
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
	
	for(int row=0;row<image.size();row++){
		//reverse
		reverse(image[row].begin(),image[row].end());
		//inverse
		for (int i=0;i<image[row].size();i++){
			if(image[row][i]==0){
				image[row][i]=1;
			}
			else{
				image[row][i]=0;
			}
		}
	}
	return image;
}
int main()
{
	vector<vector<int>> image={{1,1,0},{0,1,0},{0,1,1}};
	image=flipAndInvertImage(image);
	for(auto i: image)
	{
		displayVector(i);
	}
}