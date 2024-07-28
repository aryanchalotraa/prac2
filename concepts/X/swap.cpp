#include<iostream>
using namespace std;
//function to swap 2 numbers
void swap(int  *a, int * b){
    *a=(*a^*b)^(*b=*a);
}
int main(){
    int a=10;
    int b=30;
    cout<<"Before Swap: \na= "<<a<<endl<<"b= "<<b<<endl;
    //calling swap funnction
    swap(&a,&b);
    cout<<"After Swap: \na= "<<a<<endl<<"b= "<<b<<endl;
    return 0;
}