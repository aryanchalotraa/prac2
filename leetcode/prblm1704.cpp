//https://leetcode.com/problems/determine-if-string-halves-are-alike/
#include<iostream>
#include<string>
using namespace std;
int nvowel(string s){
	int c=0;
	for (auto i:s){
		i=tolower(i);
		if(i=='a'||i=='o'||i=='u'||i=='e'||i=='i'){
			c++;
		}
	}
	return c;
}
bool halvesAreAlike(string s) {
	string str1,str2;
	str1=s.substr(0,s.length()/2);
	str2=s.substr(s.length()/2,s.length());
	return nvowel(str1)==nvowel(str2);
}

int main()
{
	cout<<halvesAreAlike("hello")<<endl;
}