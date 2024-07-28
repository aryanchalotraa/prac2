#include<iostream>
using namespace std;
void example(){
	auto x=10; // x is automatically assumed to be of type int
	auto y='a';
	cout<<typeid(x).name()<<endl;
	cout<<typeid(y).name();
}
int main(){
	example();
}