//To find size of the array
#include<iostream>
using namespace std;

int main(){
    int array[10];

    int length = sizeof(array)/sizeof(int);

    cout<<"Size of array is "<<length<<endl;
}