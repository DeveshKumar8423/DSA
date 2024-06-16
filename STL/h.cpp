//Set
#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> d;

    d.insert(5);
    d.insert(5);
    d.insert(4);
    d.insert(7);
    d.insert(2);
    d.insert(7);
    d.insert(1);

    
//for traversing set
    for(auto i:d){
        cout<<i<<" ";
    }
    cout<<endl;

set<int>::iterator it = d.begin();
it++;
    d.erase(it);
    for(auto i:d){
        cout<<i<<" ";
    }
    

}