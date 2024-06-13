//Sort O and 1
#include<iostream>
using namespace std;

void printarray(int arr[] , int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void sortone(int arr[] , int size){

    int i=0 ; 
    int j = size-1;

    while(i < j){

        while(arr[i] == 0 && i<j){
            i++;
        }
        while(arr[j] == 1 && i<j){
            j--;
        }
        //arr[i=1] and arr[j==0] then
        if(i<j){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
    }

}

int main(){

    int arr[9] = {0,1,0,1,1,0,0,1,0};
    sortone(arr , 9);
    printarray(arr, 9);
    
}