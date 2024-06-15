//Encapsulation
#include<iostream>
using namespace std;

class student{
    private:
        int age;
        string name;
        int height;

    public:
        int getage(){
            return this -> age;
        }
}

int main(){

    student first;

    return 0;
}