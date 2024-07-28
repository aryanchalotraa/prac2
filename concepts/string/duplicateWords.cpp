#include<iostream>
#include<string>
#include<unordered_map>
#include<sstream>
using namespace std;

void duplicate_word(string sentence)
{   
	unordered_map <string,int> word_count;
	sentence+=" ";
	string str="";
	for( auto i: sentence)
	{
		if(i!=' ')
		{
			str+=i;
		}
		else
		{
			word_count[str]++;
			str="";
		}
	}
	bool dupflag=false;
	for(auto i: word_count)
	{
		if(i.second>1){
			cout<<i.first<<" : "<<i.second<<endl;
			dupflag=true;
		}
	}
	if(!dupflag)
	{
		cout<<"No duplicate words found!"<<endl;
	}
}
int main()
{
	string sentence;
	getline(cin,sentence);
	cout<<"Entered sentence: "<<sentence<<endl;
	duplicate_word(sentence);
	stringstream word(sentence);
	string temp;
	while(word>>temp)
	{
		cout<<temp<<" ";
	}
	
}