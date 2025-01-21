//next greater element
#include<iostream>
using namespace std;

int main(){
    int arr[] = {4, 1, 2};  
    int n = sizeof(arr)/sizeof(arr[0]); 
    int ans[n]; 

    for (int i = 0; i < n; ++i){
        ans[i] = -1;
    }    
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            if (arr[j] > arr[i]){
                ans[i] = arr[j];  
                break;  
            }
        }
    }
    for(int i : ans){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
