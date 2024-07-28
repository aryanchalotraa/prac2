#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<vector<int>> v={{10,290},{99,100}};
    int a;
    for(int i=0;i<v.size();i++){
            int first=v[i][0];
            int second=v[i][1];
            if(v[i+1][0]>first&&v[i+1][0]<second||v[i+1][1]>first&&v[i+1][0]<second){
                cout<<"False"<<endl;
                a=1;
                break;
               }
            else{
                a=0;
            }
    }
    if(a==0){
        cout<<"True";
    }
}
