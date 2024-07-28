//https://leetcode.com/problems/sorting-the-sentence/
#include<iostream>
#include<string>
#include<unordered_map>
#include<sstream>
using namespace std;
string sortSentence(string s) {
	stringstream word(s);
	string temp; //to iterate the word
	unordered_map<int,string> mp; 
	int total_word_count=0; //SAVE THE TOTAL WORDS 
	while(word >> temp){
		int pos=temp[temp.length()-1]-'0'; //fetch the last integer from the string as integer
		temp.erase(temp.length()-1,temp.length()-1);//ERASE THE LAST INTEGER FROM THE STRING
		mp[pos]=temp;  // mp[integer]=string
		total_word_count++; //
	}
	string result=""; //final result string
	for(int i=0;i<total_word_count;i++){
		result+=mp[i+1]+" ";
	}
	result.erase(result.length()-1,result.length()-1); //ERASE THE EXTRA SPACE
	
	return result;
}
int main()
{
	cout<<sortSentence("world2 hello1 !3");
}