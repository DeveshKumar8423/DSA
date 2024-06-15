#include<iostream>
using namespace std;

class hero{
public:
    int health;
    char level;
    //static keyword
    static int timetocomplete;

    hero(){
        cout<<"Simple constrictor called"<<endl;
    }

    //parametrised constructor
    public:
    hero(int health){
        cout<<"This "<<this<<endl;
        this->health = health;
    }

    void sethealth(int n){
        health = n;
    }

    void setlevel(int n){
        level = n;
    }

    static int random(){
        return timetocomplete;
    }

    //copy constructor
    hero(hero& temp){
        cout<<"Copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

};

int hero::timetocomplete = 5; 

int main(){

    cout<<hero::timetocomplete<<endl;
    cout<<hero::random()<<endl;

    hero devesh;

    devesh.sethealth(70);
    devesh.setlevel('a');

    //copy constructor
    hero yash(devesh);


    cout<<"Health "<<yash.health<<endl;
    cout<<"Level "<<yash.level<<endl;



    cout<<"Address of devesh "<<&devesh<<endl;

    return 0;
}