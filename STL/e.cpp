//Stack
#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> d;

    d.push("Devesh");
    d.push("Kumar");
    d.push("Gola");
    
//for traversing stack
    while (!d.empty()) {
        cout << d.top() << " ";
        d.pop();
    }

    cout<<"Size "<<d.size()<<endl;
    cout<<"Empty or not "<<d.empty()<<endl;;
    cout<<"Top element "<<d.top()<<endl;
    d.pop();

}