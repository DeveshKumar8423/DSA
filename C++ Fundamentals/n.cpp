//Prime Number
#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    bool flag = true;

    for(i=2;i*i<n;i++){
        if(n%i==0){
            cout<<"Not a prime number"<<endl;
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Prime Number"<<endl;
    }

    return 0;
}