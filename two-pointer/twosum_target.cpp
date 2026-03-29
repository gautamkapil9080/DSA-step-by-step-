#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(),startp=0,endp=n-1;
        while(startp<endp){
            if(nums[startp]+nums[endp]==target){
                return {startp,endp};
            }
            else if(nums[startp]+nums[endp]<target){
                startp++;
            }
            else if(nums[startp]+nums[endp]>target){
                endp--;
            }

        }
        return {}; // We cannot find anyone so we will throw this one.
        
        
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,2,3};
    int target = 10;

    vector<int> ans = obj.twoSum(nums, target);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}