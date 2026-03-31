#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSumSmaller(vector<int>& nums, int target) {
       vector<vector<int>>answer; 
        int n=nums.size();
       for(int i=0;i<n-2;i++){
            int s=i+1, e=n-1;
            while(s<e){
                 int sum=nums[i]+nums[s]+nums[e];
                if(sum<target){
                    answer.push_back({nums[i],nums[s],nums[e]});
                    s++;
                }
                else{
                    e--;
                }  
            }
       }
       
        
     return answer;   
    }
};

int main() {
    Solution obj;

    vector<int> nums = {-2, 0, 1, 3};
    int target = 2;

    vector<vector<int>> ans = obj.threeSumSmaller(nums, target);

    for (auto &triplet : ans) {
        cout << triplet[0] << " " << triplet[1] << " " << triplet[2] << endl;
    }

    return 0;
}