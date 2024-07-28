#include<iostream>
using namespace std;
int main(){
    int a[]={1,4,2,3,2};
    int value=7;
    int count=0;
    //pick the 1st element of the pair
    for(int i=0;i<5;i++){
        //pick the 2nd element of the pair along with a[i]
        for(int j=i+1;j<5;j++){
            //pick the 3rd element of the pair
            for(int k=j+1;k<5;k++){
                if(a[i]+a[j]+a[k]==value){
                    count++;
                }
            }
        }
    }
    cout<<"the count of pairs "<<value<<" is "<<count<<endl;
}
