#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<"Enter 3 numbers:"<<endl;
    cin>>num1>>num2>>num3;
    cout<<"The maximum of the three number : ";
    if (num1>num2){
        if (num1>num3){
            cout<<num1;
        }
        else{
            cout<<num3;
        }
        }
    else{
        if(num2>num3){
                cout<<num2;
            }
            else{
                cout<<num3;
            }
    
    }
}