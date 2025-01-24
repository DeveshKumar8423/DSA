#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> linkedList;

    linkedList.push_back(10); 
    linkedList.push_back(20); 
    linkedList.push_back(30); 
    linkedList.push_back(40); 
    linkedList.push_front(70); 

    cout << "Linked List: ";
    for (int val : linkedList) {
        cout << val << " -> ";
    }
    cout << "NULL" << endl;

    linkedList.remove(20); 

    cout << "After Deletion: ";
    for (int val : linkedList) {
        cout << val << " -> ";
    }
    cout << "NULL" << endl;

    return 0;
}