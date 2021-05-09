//basic stacks overview c++
//Stacks: FILO or LIFO
//encapsulates vector, dequeue, or list

#include <stack>
#include "iostream"

using namespace std;

//stack
//  empty()
//  size()
//  top()
//  push()
//  pop()

int main(){
    //constructor 
    stack<int> stack;
    //adding elements
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Size: " << stack.size() << "\n";
    cout << "Empty: " << stack.empty() << "\n";
    cout << "Top: " << stack.top() << "\n";
    stack.pop(); printf("pop\n");
    cout << "Top: " << stack.top() << "\n";
    stack.pop(); printf("pop\n");
    cout << "Top: " << stack.top() << "\n";

    
    return 0;
}