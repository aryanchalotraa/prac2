//https://leetcode.com/problems/contains-duplicate/
#include<iostream>
#include<vector>
#include<map>
#include<unordered_set>
using namespace std;

bool unordered_set_containsDuplicate(vector<int> nums) {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	  
		unordered_set<int> s;
		for(int i:nums){
			if(s.find(i)==s.end()){
				return true;
			}
			s.insert(i);
		}
		return false;
		
		
}
bool map_constainsDuplicate(vector<int> nums)
{
	map<int,int> visited;
		for(int i :nums){
			if(visited.find(i)==visited.end()){
				visited[i]=1;
			}
			else{
				return true;
			}
		}
		return false;
}

int main()
{
	cout<<"Unordered Set: "<<unordered_set_containsDuplicate({1,2,3,1})<<endl;
	cout<<"Map: "<<map_constainsDuplicate({1,2,3,1})<<endl;
}