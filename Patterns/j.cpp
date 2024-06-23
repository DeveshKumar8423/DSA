#include<iostream>
using namespace std;

int main(){

    int n,ch,i,j;
    cin>>n;
    ch = 'A';
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<char(ch)<<" ";
        }
        cout<<endl;
        ch = ch+1;
    }

    return 0;
}