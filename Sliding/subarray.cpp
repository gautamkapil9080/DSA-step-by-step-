#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxSumSubarray(vector<int>& nums, int k) {
        int n=nums.size(),maxSum=-99999,sum=0,s=0,end=k-1;
        for(int i=0;i<=k;i++){
            sum=sum+nums[i];
        }
        while(end<n){
            maxSum=max(sum,maxSum);
            s++;
            end++;
            sum=sum-nums[s-1];
            if(end==n){
                break;
            }
            sum=sum+nums[end];
        }

        
        
    return maxSum;
}
};

int main() {
    Solution obj;

    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 3;

    int ans = obj.maxSumSubarray(nums, k);

    cout << ans;

    return 0;
}