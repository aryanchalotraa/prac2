#include<iostream>
using namespace std;
int main(){
    auto divide=[](int a,int b)->double{
    if(b == 0){
       return 0;
    }
    return static_cast<double>(a)/b;  //static_cast ----> It will convert Datatype.
    };
    cout<<"Division result: "<<divide(10,2)<<endl;
    cout<<"Division by Zero result: "<<divide(10,0)<<endl;
}
