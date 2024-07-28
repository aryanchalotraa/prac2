#include<iostream>
using namespace std;
void sorting(int arr1[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr1[j]>arr1[j+1]){
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
}
int searching(int arr1[],int n,int ele){
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr1[mid]==ele){
            return mid;
        }
        else if(arr1[mid]>ele){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[6]={44,5,67,12,89,45};
    sorting(arr,6);
    cout<<"After Sorting"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int index=-1;
    index=searching(arr,6,45);
    cout<<"Element found at: "<<index;
}
