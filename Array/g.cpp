//Reverse an array Level 3
#include<iostream>
using namespace std;

void reverse_array(int arr[] , int n){

    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }

}

void print_array(int arr[] , int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){

    int arr[6] = {1,2,3,4,5,6};

    reverse_array(arr,6);
    print_array(arr,6);

    
    return 0;
}