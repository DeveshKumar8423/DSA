//Deque
#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(2);
    d.push_front(6);
    cout<<d.empty()<<endl;
    cout<<d.size()<<endl;

    d.clear();
    for(int i:d){
        cout<<i<<" ";
    }

}