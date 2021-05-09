// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

// Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9. 
// X can be placed before L (50) and C (100) to make 40 and 90. 
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given a roman numeral, convert it to an integer.

#include "vector"
#include <iostream>
#include <stdlib.h>
#include <unordered_map>

using namespace std;

//input: string of roman numerals
//output: roman numerals expressed as int value
//option 1: 
//  - create map to store numerals
//  - traverse s from right to left
//  - add each numeral value until i-1 < i
//  - continue but subtract from sum

int romanToInt(string s) {
    int sum = 0;
    unordered_map <char, int> map = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    //add s.at(size-1);
    //start s.at(size-2);
    //check if s.at(size-2) > s.at(size-1)
    //if yes: add s.at(size-2)
    //if no: sub s.at(size-2)
    //move r->l until interator == 0
    sum += map.at(s[s.size()-1]);
    for(int i=s.size()-2; i >= 0; i--){
        //s[i] < s[i+1]
        if(map.at(s[i]) < map.at(s[i+1])){
            sum -= map.at(s[i]);
        }
        else{
            sum += map.at(s[i]);
        }
    }
    return sum;
}
int main(){
    string temp;
    std::cin >> temp;
    cout << romanToInt(temp);
    return 0;
}
