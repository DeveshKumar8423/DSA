//Minimum and Maximum in an array
#include<iostream>
#include<climits>
using namespace std;

int get_max(int array[] , int n){

    int maxi = INT_MIN;

    for(int i=0;i<n;i++){
        
        maxi = max(maxi,array[i]);
        //if(array[i] > max){
        //    max = array[i];
        //}
    }
    return maxi;
}

int get_min(int array[] , int n){

    int mini = INT_MAX;

    for(int i=0;i<n;i++){

        mini = min(mini,array[i]);

        //if(array[i] < min){
        //    min = array[i];
        //}
    }
    return mini;
}

int main(){

    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;

    int array[100];

    for(int i=0;i<size;i++){
        cout<<"Enter "<<i<<" element of array :"<<endl;
        cin>>array[i];
    }

    cout<<"MAximum value of array is "<<get_max(array,size)<<endl;
    cout<<"Minimum value of array is "<<get_min(array,size)<<endl;


    return 0;
}