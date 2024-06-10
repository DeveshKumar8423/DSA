//Vector

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> a(5,1);
    cout<<"Print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }

//copy a vector
    vector<int> z(a);
    cout<<"Print z"<<endl;
    for(int i:z){
        cout<<i<<" ";
    }


    vector<int> v;
    cout<<"Size "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity "<<v.capacity()<<endl;
    cout<<"Size "<< v.size()<<endl;

    v.pop_back();

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<"Element at second index "<<v.at(1)<<endl;

    cout<<"Before clear the sum is "<<v.size()<<endl;
    v.clear();
    cout<<"After clear the sum is "<<v.size()<<endl;

}