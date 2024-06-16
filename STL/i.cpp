#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int,string> m;

    m[1] = "devesh";
    m[15] = "kumar";
    m[7] = "Gola";

    m.insert({12,"Singh"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Is 2 is there or not "<<m.count(15)<<endl;

    auto it = m.find(15);
    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }

}