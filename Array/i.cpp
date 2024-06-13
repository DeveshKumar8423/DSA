//Swap Alternative
#include<iostream>
using namespace std;

void printarray(int arr[] , int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void swapalternate(int arr[] , int size){

    for(int i=0 ; i<size; i=i+2){
        if(i+1 < size){
            swap(arr[i] , arr[i+1]);
        }
    }
}

int main(){

    int arr[8] = {2,3,4,5,6,7,8,9};
    int arra[5] = {1,2,3,4,5};

    swapalternate(arr,8);
    swapalternate(arra,5);

    printarray(arr,8);
    cout<<endl;
    printarray(arra,5);

}