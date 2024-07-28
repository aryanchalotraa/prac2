#include<iostream>
using namespace std;
void example(){
	static int count=0;
	count++;
	cout<<"count:" <<count<<endl;
}
void diff()
{
	int count=0;
	count++;
	cout<<"count:" <<count<<endl;
}
int main(){
	example();
	example();
	cout<<"Difference: "<<endl;
	diff();
	diff();
}