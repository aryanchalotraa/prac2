#include<iostream>
using namespace std;
class Example {
	mutable int value;
	public: 
		Example(int val):value(val){} //constructor
		void modify() const{value++ ;}
		void display(){cout<<"VALUE: "<<value<<endl;}
};

int main(){
	Example obj(23);
	obj.display();
	obj.modify();
	obj.display();
	
}