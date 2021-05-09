//Given a signed 32-bit integer x, return x with its digits reversed. 
//If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321

#include "vector"
#include <iostream>
#include <stdlib.h>
#include <unordered_map>

using namespace std;

//input: signed 32-bit int
    //output: signed 32-bit int, reverse order
    //option 1: 
    //  - x%10 = get last pos digit
    //  - rev = rev*10 + (x%10);
    //  - get next digit in x: x=x/10;
    //  - repeat till x != 0
    //  check for overflow:
    //      - rev > INT_MAX / 10
    //      - rev < INT_MIN / 10
    
    int reverse(int x) {
        int rev = 0, temp;
        while(x != 0){
            //get last digit
            temp = x%10;
            //check for overflow
            if(rev > (INT_MAX / 10)){ return 0;}
            if(rev < (INT_MIN / 10)){ return 0;}
            //add to rev
            rev = rev * 10 + temp;
            //update x
            x = x/10;
        }
        return rev;
    }

int main(){
    int temp;
    std::cin >> temp;
    cout << reverse(temp);
    return 0;
}
