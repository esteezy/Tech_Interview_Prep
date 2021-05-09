// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1].

#include "vector"
#include <iostream>
#include <stdlib.h>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    //key - nums; value - index
    unordered_map<int, int> map;
    //traverse nums
    for(int i=0; i<nums.size(); i++){
        //create comp
        int comp = target - nums[i];
        //check if comp exists in map
        if(map.find(comp) != map.end()){
            //comp found
            vector<int> result{map.at(comp), i};
            return result;
        }
        //DNE
        pair<int, int> new_one(nums[i], i);
        map.insert(new_one);
    }
    vector<int> empty;
    return empty;
}

