#include<iostream>
using namespace std;
void example(){
	register int counter=0; //compatible till c++11
	for(register int i=0;i<10;++i){
		counter +=i;
	}
}
int main(){
	example();
}