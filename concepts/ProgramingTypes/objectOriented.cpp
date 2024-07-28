//object oriented programming
#include<iostream>
using namespace std;
class Person{
    //by default : private modifiers
    string name;  
    int age;
    string city;
    //creating methods with public modifiers
    public:
    void setData(){
        cout<< "Enter your Name: ";
        cin,name;
        cout<< "Enter your Age: ";
        cin>>age;
        cout<< "Enter your city: ";
        cin>>city;
    }
    void getData(){
        cout<<"Name: "<<name<< endl << "Age: " << age << endl << "City: "<< city <<endl;
    }
};
int main()
{
    //creating a class object
    Person p1;
    
    //calling class methods
    p1.setData();
    p1.getData();
    
    return 0;
}