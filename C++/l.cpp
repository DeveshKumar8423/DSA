#include<iostream>
using namespace std;

int main(){
    char c;
    cin >> c;
    
    if (c >= 'A' && c <= 'Z'){
        cout << "UpperCase" << endl;
    }
    else if (c >= 'a' && c <= 'z'){
        cout << "LowerCase" << endl;
    }
    else if (c >= '0' && c <= '9'){
        cout << "Numeric" << endl;
    }
    else{
        cout << "Invalid" << endl;
    }
    
    return 0;
}