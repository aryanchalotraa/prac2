#include<iostream>
using namespace std;
void selection(int arr1[],int n){
    for(int i=0;i<n;i++){
        int minInd=i;
        for(int j=i+1;j<n;j++){
            if(arr1[j]<arr1[minInd]){
                swap(arr1[j],arr1[minInd]);
                 }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the Number of Elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    selection(arr,n);
    cout<<"After Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
