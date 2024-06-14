//fibonacci series
#include<iostream>
using namespace std;

int main(){

    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=10 ; i++){
        int sum = a+b;
        cout<<sum<<" ";

        a = b;
        b = sum;

    }

    return 0;
}