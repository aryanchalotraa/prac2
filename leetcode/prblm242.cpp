//https://leetcode.com/problems/valid-anagram/description/
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
 bool isAnagram(string s, string t) {
		ios_base::sync_with_stdio(false); 
		cin.tie(NULL); 
		cout.tie(NULL);

		if (s.length()!=t.length()){
			return false;
		}
		array<int,26> char_arr={0};
	   
		for(int i: t){
			char_arr[i-97]+=1;
		}
		for(int i: s){
			char_arr[i-97]-=1;
			if(char_arr[i-97]<0){
				return false;
			}
		}
		
		return count(char_arr.begin(),char_arr.end(),0)==26;
	}
int main()
{
	if(isAnagram("hello","world"))
	{
		cout<<"It's Anagram\n";
	}
	else
	{
		cout<<"Not an Anagram\n";
	}
}