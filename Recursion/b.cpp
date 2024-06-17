#include<iostream>
using namespace std;

bool linearsearch(int arr[] , int size , int key){
    if(size==0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        bool remaining = linearsearch(arr+1  , size -1 , key);
        return remaining;

    }
}

int main(){

    int arr[6] = {1,2,3,4,5,6};
    int size = 6;
    int key = 6;

    int ans = linearsearch(arr,size,key);

    if(ans)
        cout<<"Element is found in the array"<<endl;
    else
        cout<<"Element is not found in the array"<<endl;

    return 0;
}