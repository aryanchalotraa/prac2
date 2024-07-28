#include<iostream>
using namespace std;

void sorting(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void searching(int arr[],int n){
    int m,index;
    cout<<"Enter number to search"<<endl;
    cin>>m;
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            index=i;
            break;
            }
    }
    cout<<"Element Found at Index : "<<index;
}

int main(){
    int arr[]={44,5,67,12,89,45};
    int n;
    n= sizeof(arr);
    sorting(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    searching(arr,n);

}
