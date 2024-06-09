//Converts binary to number
#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    int ans = 0;
    int i = 0;

    while(n!=0){

        int digit = n % 10;

        if(digit==1){
            ans = ans + (1 << i); // Use bitwise left shift to calculate powers of 2

        }

        n = n/10;
        i++;
    }
    cout<<"Answer is "<< ans <<endl;
}