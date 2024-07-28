//https://www.naukri.com/code360/problems/buildings-projection_1466964?leftPanelTabValue=PROBLEM
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int projectionArea(vector<vector<int>> &grid) {
    // area for xy plane. 
    int xy=0;
    for(int col=0;col<grid.size();col++){
        for(int row=0;row<grid.size();row++){
             if (grid[row][col]!=0){
                 xy++;  //if the height greater than 0 add 1
             }
        }
    }
    //area for zx plane 
    //add the maximum element of each column
    int zx=0;
    for(int col=0;col<grid.size();col++){
        int m=0;
        for(int row=0;row<grid.size();row++){
              m=max(m,grid[row][col]);
        }
        zx+=m;
    }
    //area for yz plane
    //add the maximum element of each row
    int yz=0;
    for(int row=0;row<grid.size();row++){
        sort(grid[row].begin(),grid[row].end());
        yz+=grid[row][grid[row].size()-1];
    }
   
    return xy+zx+yz;
}