#include<iostream>
using namespace std;

class Hero{
public:
    char level;
    int health;

    int gethealth(){
        return health;
    }

    void sethealth(int n){
        health = n;
    }

};

int main(){

    //statically
    Hero h1;

    cout<<sizeof(h1)<<endl;

    h1.health = 26;
    h1.level = 'c';

    cout<<"Health is "<<h1.health<<endl;

    cout<<"Health is "<<h1.gethealth()<<endl;

    cout<<"Level is "<<h1.level<<endl;

    //dynamically
    Hero *b = new Hero;
    b->health = 30;
    b->level = 'a';

    cout<<"Health is "<<(*b).gethealth()<<endl;
    cout<<"Level is "<<(*b).level<<endl;

    cout<<"Health is "<<b->gethealth()<<endl;




    return 0;
}

