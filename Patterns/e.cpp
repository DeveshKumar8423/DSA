#include<iostream>
using namespace std;

int main(){

    int r,c;
    int count = 1;
    cin>>r>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    return 0;

}