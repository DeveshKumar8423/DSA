//Priority Queue
#include<iostream>
#include<queue>
using namespace std;

int main(){

    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int, vector<int> , greater<int>> mini;

    //maximum_value come first from maxi
    maxi.push(2);
    maxi.push(7);
    maxi.push(8);
    maxi.push(3);
    maxi.push(9);

    int max_n = maxi.size();
    cout<<"Max Heap : ";
    for(int i=0;i<max_n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    //minimum_value come first from mini
    mini.push(2);
    mini.push(7);
    mini.push(8);
    mini.push(3);
    mini.push(9);


    int min_n = mini.size();
    cout<<"Min Heap : ";
    for(int i=0;i<min_n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

}