#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<string> q;
    q.push("Ajay");
    q.push("Ajab");
    q.push("Gajab");

    cout<<q.size();
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<"After Pop";
    q.pop();
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }







}
