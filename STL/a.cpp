//Array
#include<iostream>
#include<array>
using namespace std;

int main(){

    int arr[3] = {1,2,3};

    array<int,4> a = {1,2,3,4};

    int size = a.size();

    cout<<"Element at index 2 is "<<a.at(2)<<endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"First element "<<a.front()<<endl;
    cout<<"Last Element "<<a.back()<<endl;
}