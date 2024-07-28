#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main() {
    /*int a[]={-2,1,-3,4,-1,2,1,-5,4};
    int sum=0;
    int len=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++){
        sum+=a[i];
    }
    cout<<sum;
}*/
    array<int,9> a ={-2,1,-3,4,-1,2,1,-5,4};
    int sum=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
    }
    cout<<sum;
}
