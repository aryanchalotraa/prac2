//https://leetcode.com/problems/to-lower-case/
#include<iostream>
#include<string>
using namespace std;
string toLowerCase(string s) {
	string result="";
	for(auto i: s){
		result+=tolower(i);
	}
	return result;
}
int main()
{
	cout<<toLowerCase("HELlo!")<<endl;
}
	