#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<vector<int>> meet={{7,10},{2,4},{5,6},{11,14}};
	// {{7,10},{2,4},{5,6},{11,14}}  {{4,6},{7,9},{1,2},{5,8}} {{5,7},{10,12},{3,6}}  {{0,30},{5,10},{15,20}}  {{4,6},{3,9},{7,12}}
	
	int flag=1;
	sort(meet.begin(),meet.end(),[](vector<int> a,vector<int> b){ return a[0]<b[0];});
	
	for(int i=1;i<meet.size();i++)
	{
		if(meet[i][0]>meet[i-1][1])
		{
			continue;
		}
		else
		{  
			cout<<"False";
			flag=0;
			break;
		}
	}
	if(flag==1)
		cout<<"True";
	
	/*	
	flag=1;	
	
	for( int i=0;i<meet.size();i++)
	{
		for (int j=i+1;j<meet.size();j++){
			if(meet[i][0]>meet[j][1] || meet[j][0]>meet[i][1])
			{
				continue;
			}
			else
			{
				cout<<"False";
				flag=0;
				break;
			}
		}
		if(flag==0)
		{
			 break;
		}
	}
	if(flag==1)
		cout<<"True"; */
}