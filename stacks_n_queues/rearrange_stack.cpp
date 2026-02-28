#include<bits/stdc++.h>
using namespace std;

// rearrange the given inputStack in increasing order (largest on top) 
// can only use one tmepStack

stack<int> sortStack(stack<int> &inputStack){

    stack<int> tempStack;

    while(!inputStack.empty()){
        int temp = inputStack.top();
        inputStack.pop();
        // special case
        while(!tempStack.empty() && temp<tempStack.top()){
            inputStack.push(tempStack.top());
            tempStack.pop();
        }
        tempStack.push(temp);
    }
    return tempStack;
}

int main(){
    stack<int> inputStack;
    inputStack.push(1);
    inputStack.push(5);
    inputStack.push(7);
    inputStack.push(2);

    // sort the stack
    stack<int> sortedStack = sortStack(inputStack);
    // print the sorted stack
    while(!sortedStack.empty()){
        cout << sortedStack.top() << " ";
        sortedStack.pop();
    }
}