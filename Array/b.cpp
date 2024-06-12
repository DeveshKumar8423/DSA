//Arrays with functions
#include<iostream>
using namespace std;

void printarray(int arr[] , int size){
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";

    }
}

int main(){
    int n;
    int array[10] = {0};

    printarray(array,10);

    return 0;
}