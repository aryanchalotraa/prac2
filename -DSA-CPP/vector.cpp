#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector size is increased dynamically
    vector<int> v;
    cout<<"Capacity: "<<v.capacity()<<endl; //size will return 0;
    v.push_back(10);
    cout<<"Capacity: "<<v.capacity()<<endl; //size will return 1
    v.push_back(12);
    cout<<"Capaity: "<<v.capacity()<<endl; //size will return 2
    v.push_back(14);
    cout<<"Capacity: "<<v.capacity()<<endl; //size will return 4

    //because it creates a new vector and with double size and older vector data is stored in to the new vector.

    cout<<"Size: "<<v.size()<<endl;

    cout<<"First Element: "<<v.front()<<endl;
    cout<<"Last Eleement: "<<v.back()<<endl;

    // before pop
    cout<<"Before pop: "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After pop: "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<"Before clear size = "<<v.size()<<endl;
    v.clear();
    cout<<"After Clear size: "<<v.size()<<endl;
    //another way to create a vector
    vector<int> v(5,1);
    //means size is 5 and all five deafult value is 1
    cout<<"Print all element: "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
}
