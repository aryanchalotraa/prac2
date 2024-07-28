#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
bool check_digit(char n)
{
	if(n=='1'|| n=='2' || n=='3' || n=='4' || n=='5'|| n=='6' || n=='7' || n=='8' || n=='9' || n=='0')
	  return true;
	return false;
}
int main()
{
	string s="jhon12766Doe14@gm@ail118.com8";
	cout<<"Enter String: ";
	getline(cin,s);
	int alphabets[255]={0};
	for(int i:s)
	{
		alphabets[i]++;
	}
	//printing
	for(int i=0;i<255;i++)
	{
		if(alphabets[i]>1 && check_digit(char(i)))
			cout<<"Character "<<char(i)<< " occurs: " <<alphabets[i]<<endl;
	} 
	
	//method 2
	//using while loop 
	s+="\n";
	int i=0;
	string result="";
	while(s[i]!=10)
	{
		int count=1;
		int j=i+1;
		while(s[j]!=10)
		{
			if(s[i]==s[j])
			{   
				count++;
			}
			j++;
		}
		if(count>1 && check_digit(s[i]))
		{
			
			bool flag =true;	
			for(int k:result)
			{
				if (k==s[i])
				{
					flag=false;
					break;
				}
			}
			if(flag)
			{
				result+=s[i];
				cout<<"Number of "<<s[i]<<" = "<<count<<endl;
			}
		}
		i++;
	}
}

