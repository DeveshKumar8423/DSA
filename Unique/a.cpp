//A ‘\0’ character terminates char*, so the string “Hello\0World” will be cut down to “Hello”.

#include<iostream>
#include <cstring>
using namespace std;

int main(){

    const char * a = "Hello\0World";
    cout << strlen(a) << endl;

    return 0;
}
