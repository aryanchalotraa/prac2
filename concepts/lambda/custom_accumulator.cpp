#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
	vector<string> words ={"hello","world","from","c++"};
	//using accumulate with lambda to concatenate strings.
	string result=accumulate(words.begin(),words.end(),string(""),[](const string& total,string& word)
	{
		return total+(total.empty() ? "": " ") +word;
	});
	cout<<"Concatenated String: "<<result<<endl;
}