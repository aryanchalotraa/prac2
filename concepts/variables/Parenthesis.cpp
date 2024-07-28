#include<iostream>
using namespace std;
int main(){
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    //int bad_initialization (doesn't exist3 + doesn't exit4);
    //information lost. less safe than braced initializers
    int narrowing_conversions_functional (2.9);
    cout<<"Apple count: "<<apple_count<<endl;
    cout<<"Orange count: "<<orange_count<<endl;
    cout<<"Fruit count: "<<fruit_count<<endl;
    cout<<"Narrowint Conversion: "<<narrowing_conversions_functional<<endl;



}