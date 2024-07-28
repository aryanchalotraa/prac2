/*
1) A student will not be allowed to sit in exam if his/her attendence is less

than 75%.

Take following input from user:

 Number of classes held

 Number of classes attended.

And print:

 percentage of class attended

 Is student is allowed to sit in exam or not.
*/
#include<iostream>
using namespace std;
int main(){
    int n_ClasseAttend,n_ClassesHeld;
    cout<<"Enter total classes Held: ";
    cin>>n_ClassesHeld;
    cout<<"Enter total classes Attended: ";
    cin>>n_ClasseAttend;
    double Attendence_per{100*(n_ClasseAttend*(1.0)/n_ClassesHeld)};
    cout<<"Attendence percentage: "<<Attendence_per<<"%"<<endl;
    if(Attendence_per>=75)
        cout<<"Student is allowed to sit in exam"<<endl;
    else
        cout<<"Student is not allowed to sit in exam"<<endl;
}