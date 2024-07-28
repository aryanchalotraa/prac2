//https://leetcode.com/problems/contains-duplicate/description/
#include <iostream>
#include <vector>
#include <unordered_set>
#include <map>
using namespace std;
bool containsDuplicate_set(vector<int> nums) {
	unordered_set<int> s;
	for(int i:nums){
		if(s.find(i)!=s.end()){
			return true;
		}
		s.insert(i);
	}
	return false;
	
}
bool containsDuplicate_map(vector<int> nums) {
	map<int,int> visited;
	for(int i :nums){
		if(visited.find(i)==visited.end()){
			visited[i]=1;
		}
		else{
			visited[i]++;
		}
		if(visited[i]>1){
			return true;
		}
	}
	return false;
}
int main()
{
	cout<<containsDuplicate_map({2,4,6,4,1})<<endl;
	cout<<containsDuplicate_set({2,4,6,1})<<endl;
}
