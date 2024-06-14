//switch case use
#include<iostream>
using namespace std;

int main(){

    int a,b;
    char op;
    cout<<"Enter the operation "<<endl;
    cin >> op;

    cout<<"Enter the operands a and b :"<<endl;
    cin>>a>>b;

    switch (op){

        case '+': 
                cout<<"Addition of a and b is : "<<a+b<<endl;
                break;

        case '-': 
                cout<<"Subtraction of a and b is : "<<a-b<<endl;
                break;

        case '*': 
                cout<<"Multiplication of a and b is : "<<a*b<<endl;
                break;

        case '/': 
                cout<<"Division of a and b is : "<<a/b<<endl;
                break;

        default: cout<<"You have entered the wrong operator"<<endl;
        

    }

    return 0;
}