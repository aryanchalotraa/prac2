//https://leetcode.com/problems/available-captures-for-rook/description/
#include <iostream>
#include <vector>
using namespace std;

int numRookCaptures(vector<vector<string>>& board) {
	//string is used instead of char(leetcode)
	int r=0,c=0;
	//locating the rook
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(board[i][j]=="R"){
					r=i;
					c=j;
			}
		}
	}
	int ans=0;

	//checking the left side of rook
	for(int j=c-1;j>=0;j--){
		if(board[r][j]=="B"){
			break;
		}
		if(board[r][j]=="p"){
			ans++;
			break;
		}
	}
	//checking the right side of rook
	for(int j=c+1;j<8;j++){
		if(board[r][j]=="B"){
			break;
		}
		if(board[r][j]=="p"){
			ans++;
			break;
		}
	}
	//checking the upper side of rook
	for(int i=r-1;i>=0;i--){
		if(board[i][c]=="B"){
			break;
		}
		if(board[i][c]=="p"){
			ans++;
			break;
		}
	}
	//checking the down side of rook
	for(int i=r+1;i<8;i++){
		if(board[i][c]=="B"){
			break;
		}
		if(board[i][c]=="p"){
			ans++;
			break;
		}
	}
	return ans;
}
int main()
{
	vector<vector<string>> board {{".",".",".",".",".",".",".","."},{".",".",".","p",".",".",".","."},{".",".",".","p",".",".",".","."},{"p","p",".","R",".","p","B","."},{".",".",".",".",".",".",".","."},{".",".",".","B",".",".",".","."},{".",".",".","p",".",".",".","."},{".",".",".",".",".",".",".","."}};
	cout<<numRookCaptures(board);
}