//Queue
#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<string> d;

    d.push("Devesh");
    d.push("Kumar");
    d.push("Gola");
    
//for traversing queue
    while (!d.empty()) {
        cout << d.front() << " ";
        d.pop();
    }

    cout<<endl;
    cout<<"front "<<d.front()<<endl;
    d.pop();
    cout<<"front "<<d.front()<<endl;


    cout<<"Size "<<d.size()<<endl;
    cout<<"Empty or not "<<d.empty()<<endl;





}