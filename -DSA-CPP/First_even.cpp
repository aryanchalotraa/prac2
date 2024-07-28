#include<iostream>
#include<vector>
#include<algorithm> //for find if
using namespace std;
int main()
{
    int even=0;
    vector<int> numbers = {1,3,5,8,10,13};
    for(int i:numbers){
        if(i%2==0){
            cout<<"First even number is : "<<i<<endl;
            even++;
            break;
        }
    }
    if(even!=1){
        cout<<"No even number in vector";
    }
    return 0;
}
