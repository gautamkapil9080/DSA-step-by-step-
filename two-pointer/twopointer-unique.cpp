#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> twoSum(vector<int>& nums, int target) {
       vector<vector<int>>answer; // we have create the vector of vector 
       int n=nums.size(),i=0,j=n-1;
       // Outside of the Loop: 
       while(i<j){
        // Case 1: If the both value sum give the target: 
        if(nums[i]+nums[j]==target){
            answer.push_back({nums[i],nums[j]});  // This is the way of filling the value for the list: 
            i++;
            j--;

            // For the duplicate : if the number is repeating: 
            while(nums[i]==nums[i-1]){
                i++;
            }
            while(nums[j]==nums[j+1]){
                j--;
            }
        }
        
        // Case 2: For the Unequal case : sum value greater than target:
        else if(nums[i]+nums[j]<target){
            i++;
        }
        else{
            j--;
        }
       } 
       return answer;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 1, 2, 2, 3, 4, 5};
    int target = 6;

    vector<vector<int>> ans = obj.twoSum(nums, target);

    for (auto &p : ans) {
        cout << p[0] << " " << p[1] << endl;
    }

    return 0;
}