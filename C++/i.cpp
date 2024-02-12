//prime number program
#include <iostream> 
using namespace std; 
int main() { 
    int n , i;
    cout<<"Input number to check Prime"<<endl;
    cin>>n;

    for( i=2 ; i<n ; i++){
        if(n%i == 0){
            cout<<"Not a prime number"<<endl;
            break;
        }
        else{
            cout<<"Prime number"<<endl;
            break;
        }
    }
}