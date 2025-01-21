#include <iostream>
#include <stack>
using namespace std;

void sortStack(stack<int>& s) {
    stack<int> tempStack;
    while (!s.empty()) {
        int current = s.top();
        s.pop();

        while (!tempStack.empty() && tempStack.top() > current) {
            s.push(tempStack.top());
            tempStack.pop();
        }
        tempStack.push(current);
    }

    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}

void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    cout << "Original stack: ";
    printStack(s);

    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    sortStack(s);

    cout << "Sorted stack: ";
    printStack(s);

    return 0;
}
