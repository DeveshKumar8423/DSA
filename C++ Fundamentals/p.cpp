#include<iostream>
using namespace std;

bool isEven(int a){
    //odd
    if(a&1){
        return 0;
    }
    return 1;
}

int main(){

    int n;
    cin>>n;

    if(isEven(n)){
        cout<<"Answer is Even"<<endl;
    }
    else{
        cout<<"Answer is Odd"<<endl;
    }


    return 0;
}