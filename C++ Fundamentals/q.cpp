//NCR program by functions
#include<iostream>
using namespace std;

int factorial(int n){
    
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

int ncr(int n , int r){

    int num = factorial(n);

    int deno = factorial(r) * factorial(n-r);

    return num/deno;
}

int main(){

    int n,r,ans;
    cout<<"Enter n and r : ";
    cin>>n>>r;

    if(r>n){
        cout<<"Invalid R should be less than or equal to n"<<endl;
    }
    else{
    ans = ncr(n,r);

    cout<<"ncr is : "<<ans<<endl;
    }
    
    return 0;

}