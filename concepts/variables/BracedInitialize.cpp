#include<iostream>
using namespace std;
int main(){
    //Braced initializers
    //variable may contain random garbage value. WARNING
    int elephant_count; //garbage value 
    int lion_count{}; // initializes to zero
    int dog_count{10}; // initializes to 10
    int cat_count{15}; // initializes to 15
    // can use expression as initalizer
    int demosticated_animals {dog_count + cat_count}; 

    //int new_number{ doesn't exist};
    //int narrowing_conversion {2.9};
     // compiler error
     cout<< "Elephant count : "<< elephant_count<<endl;
     cout << "Lion count: "<< lion_count<<endl;
     cout << "Dog count: "<< dog_count<< endl;
     cout << "Cat count: "<<cat_count<<endl;
     cout<<"Demosticated animal count: "<<demosticated_animals<<endl;
     return 0;
}