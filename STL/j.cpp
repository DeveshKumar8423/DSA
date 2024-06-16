#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);

    cout<<"Finding 7 "<<binary_search(v.begin(), v.end(), 7)<<endl;
    cout<<"lower bound "<<lower_bound(v.begin(), v.end(), 7)-v.begin()<<endl;
    cout<<"upper bound"<<upper_bound(v.begin(), v.end(), 7)-v.begin()<<endl;

    int a=3;
    int b=6;

    cout<<"Max "<<max(a,b);
    cout<<"Min "<<min(a,b);
    cout<<"After swap a and b are "<<a<<" "<<b<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<<"Reverse string "<<abcd<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After rotate ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(), v.end());
    cout<<"After sort "; 
    for(int i:v){
        cout<<i<<" ";
    }

}