#include<iostream>
using namespace std;
int main(){
    bool green_light{true};
    bool red_light{false};
    for(int i=0;i<10;i++){
        if (red_light == true){
        red_light= false;
        cout<< "Red light: " <<red_light<<endl;
        cout<<"Stop!\n";
        }
        else{
            red_light= true;
            cout<< "Green light: "<<green_light<<endl;
            cout<<"Go through!\n";
        }
        cout<<"\n\n";
        _sleep(3000);
    }
}