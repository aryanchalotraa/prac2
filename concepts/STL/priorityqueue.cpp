#include<iostream>
#include<queue>
using namespace std;
int main()
{
	//max heap
	priority_queue<int> max_pq; //by default maxheap
	//min heap
	priority_queue<int,vector<int>,greater<int>> mini_pq;  //greater -> to comparision function
	max_pq.push(1);
	max_pq.push(5);
	max_pq.push(3);
	max_pq.push(4);
	cout<<"size of max priority queue: "<<max_pq.size()<<endl;
	
	int n= max_pq.size();
	for(int i=0; i<n ;i++)
	{
		cout<<max_pq.top()<<" ";
		max_pq.pop();
	}
	cout<<endl;
	mini_pq.push(5);
	mini_pq.push(1);
	mini_pq.push(0);
	mini_pq.push(4);
	mini_pq.push(3);
	
	int m = mini_pq.size();
	for(int i=0;i<m;i++)
	{
		cout<<mini_pq.top()<<" ";
		mini_pq.pop();
	}
}