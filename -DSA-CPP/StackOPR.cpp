#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int> s;
    while(1){
    int choice;
    cout<<"1.Size"<<endl<<"2.Insert"<<endl<<"3.Delete"<<endl<<"4.Top"<<endl<<"5.EXIT"<<endl;
    cout<<"Enter Your Choice "<<endl;
    cin>>choice;
    switch(choice){
        case 1: cout<<s.size()<<endl; break;
        case 2:
            {
                char ch;
                do{
                int x;
                cout<<"Enter value to insert"<<endl;
                cin>>x;
                s.push(x);
                stack<int> st=s;
                cout<<"Stack after insertion : "<<endl;
                while(!st.empty()){
                    cout<<st.top()<<" ";
                    st.pop();
                }
                cout<<endl;

                cout<<"Do you still want to Insert element (Y/N) : ";
                cin>>ch;
                }while(ch=='Y'||ch=='y');
                break;
            }
        case 3: s.pop(); cout<<"Value is deleted from the top"<<endl; break;
        case 4: cout<<"Top element in the Stack is : "<<s.top()<<endl; break;
        case 5: exit(0);
        default: cout<<"Please enter correct choice"<<endl;
    }
    }









}
