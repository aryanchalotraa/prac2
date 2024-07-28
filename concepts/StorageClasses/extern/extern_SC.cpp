#include<iostream>
#include"file1.cpp"
using namespace std;
extern int var;
void example()
{
	var++;
}
int main()
{
	example();
	cout<<"Exter Var: "<<var<<endl;
}