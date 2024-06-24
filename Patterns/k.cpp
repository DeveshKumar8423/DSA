#include<iostream>
using namespace std;

int main(){

    int n,ch,i,j;
    cin>>n;
    ch = 'A';
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<char(ch+i+j-2)<<" ";
        }
        cout<<endl;
    }

    return 0;
}