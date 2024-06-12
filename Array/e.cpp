//Linear Search 
#include<iostream>
using namespace std;

bool search(int arr[] , int size , int key){

    for(int i=0 ; i<size ; i++){
        if(arr[i]==key){
            return true;
            break;
        }
    }
    return false;

}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,0};

    cout<<"Enter the key you want to search"<<endl;
    int key;
    cin>>key;

    bool ans = search(arr, 10, key);

    if(ans){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }

    return 0;
}