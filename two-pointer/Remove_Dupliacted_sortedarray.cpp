#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),startp=0,endp=0;
        while(startp<n){
            if(n==0){
                return -1;
            }
            if(nums[startp]==nums[endp]){
                startp++;
            }
            else{
                endp++;
                nums[endp]=nums[startp];
                startp++;
            }
        }
        return endp+1;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {};

    int k = obj.removeDuplicates(nums);

    cout << "Unique count: " << k << endl;

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}