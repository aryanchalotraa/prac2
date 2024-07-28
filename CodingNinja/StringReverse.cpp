//https://www.naukri.com/code360/problems/reverse-the-string_799927?leftPanelTabValue=SUBMISSION
#include<string>
#include<iostream>
using namespace std;

string reverseString(string str)
{
	// Write your code here.
	   	int l=0;
		int u=str.size()-1;
		while(l<u){
			swap(str[l],str[u]);
			l++;
			u--;
		}
		return str;
}