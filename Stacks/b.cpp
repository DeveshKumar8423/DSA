#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> st)
{
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> currentStack;

    currentStack.push(1);
    currentStack.push(2);
    currentStack.push(3);
    currentStack.push(4);
    currentStack.push(5);

    cout << "Original stack: ";
    printStack(currentStack);

    stack<int> tempStack;
    while (!currentStack.empty()) {
        tempStack.push(currentStack.top());
        currentStack.pop();
    }
    currentStack = tempStack;

    cout << "Reversed stack: ";
    printStack(currentStack);

    return 0;
}