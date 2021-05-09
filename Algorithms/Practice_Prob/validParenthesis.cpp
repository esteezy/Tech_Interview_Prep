// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"

#include "vector"
#include <iostream>
#include <stdlib.h>
#include <unordered_map>

using namespace std;

//find longest common prefix in arr of strings
//input: array of strings
//output: longest common prefix
//option 1:
//  - find shortest string in arr
//  - compare each char with next longest
//  - add matching char to final result
//  - repeat till difference found
string longestCommonPrefix(vector<string>& strs) {
    string common = "";
    if(strs.empty()){return common;}
    if(strs.size() == 1){return strs[0];};
    sort(strs.begin(), strs.end());
    for(int i = 0; i<strs[0].size(); i++){
        if(strs[0][i] == strs[strs.size()-1][i]){
            common.push_back(strs[0][i]);
        }
        else{
            return common;
        }
    }
    return common;
}

int main(){
    vector<string> temp;
    cout << longestCommonPrefix(temp);
    return 0;
}
