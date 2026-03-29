#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int maxdiff=999999,res=0,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int s=i+1,end=n-1;
            while(s<end){
            int sum=nums[i]+nums[s]+nums[end];
            if(sum==target){
                return 0;
            }
            else if(sum<target){
                int diff=abs(sum-target);
                if(diff<maxdiff){
                    maxdiff=diff;
                    res=sum;
                }
                s++;
            }
            else{
                int diff=abs(sum-target);
                if(diff<maxdiff){
                    maxdiff=diff;
                    res=sum;
                }
                end--;
            }
            }
            
                
            }
       return res; }
 };


int main() {
    Solution obj;

    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    int ans = obj.threeSumClosest(nums, target);

    cout << ans;

    return 0;
}