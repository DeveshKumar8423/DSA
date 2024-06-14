//Pass by Value
#include<iostream>
using namespace std;

void number(int n){ //copy created n in main does not get affected
    n++;
    cout<<"Number is "<<n<<endl;
}

int main(){
    int n;
    cin>>n;

    number(n);

    cout<<"Number is "<<n<<endl;

}