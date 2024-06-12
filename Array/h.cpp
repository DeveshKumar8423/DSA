//binary search
#include<iostream>
using namespace std;

int binarysearch(int arr[] , int size , int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/ 2;

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        //right side
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid -1;
        }

        int mid = start + (end-start)/ 2;

    }
    return -1;
}

int main(){

    int array[6] = {1,2,3,4,5,6};
    int ans = binarysearch(array, 6 , 6);

    cout<<"Index is : "<<ans<<endl;

    return 0;
}