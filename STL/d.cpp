//List
#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> d;

    d.push_back(2);
    d.push_front(6);
    cout<<"before erase"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Empty or not "<<d.empty()<<endl;
    cout<<"Size "<<d.size()<<endl;

    d.erase(d.begin());
    cout<<"after erase"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }

}