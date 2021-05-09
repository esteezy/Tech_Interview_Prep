// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
 

// Example 1:

// Input: s = "()"
// Output: true

#include "vector"
#include <iostream>
#include <stdlib.h>
#include <unordered_map>
#include <stack>

using namespace std;

//input: string of: '(', ')', '{', '}', '[' and ']'
//output: T/F valid parens
//option 1:
//  - use stack to keep record of chars in s
//  - move l->r pushing chars to stack
//  - if curr char is complement of bottom stack char
//      - then pop char from stack
// if at end stack is empty -> s is valid

bool isValid(string s) {
    //courtesy check
    if(s.empty()){ return false; }

    stack<char> record;
    for(int i = 0; i<s.size(); i++){
        //check for closing comp
        if(s[i]==')' || s[i]=='}' || s[i]==']'){
            if(record.size() == 0){ return false; }
            if(s[i]==')' && record.top() != '('){ return false; }
            if(s[i]=='}' && record.top() != '{'){ return false; }
            if(s[i]==']' && record.top() != '['){ return false; }
            record.pop();
        }
        else{
            record.push(s[i]);
        }
    }
    if(record.empty()){ return true; }
    return false;    
}

int main(){
    string temp;
    cout << isValid(temp);
    return 0;
}
