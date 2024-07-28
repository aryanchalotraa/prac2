#include<iostream>
using namespace std;
int main(){
    string str1="Welcome to ";
    string str2="Miet";
    cout<<"String Length : "<<str1.length()<<endl;
    cout<<"String Concatenation : "<<(str1+str2)<<endl;
    cout<<"After Replacement : "<<(str1.replace(2,9,"    "))<<endl;
    cout<<"After Insering : "<<str1.insert(3,"S")<<endl;
    cout<<"After Erasing : "<<str2.erase();

}
