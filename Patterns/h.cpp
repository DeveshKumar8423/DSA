#include<iostream>
using namespace std;

int main(){

    int n,c,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<char('A'+i-1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}