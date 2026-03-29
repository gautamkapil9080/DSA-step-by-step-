#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 2; i++) {

            if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicate i

            int startp = i + 1;
            int endp = n - 1;

            while(startp < endp) {

                int sum = nums[i] + nums[startp] + nums[endp];

                if(sum == 0) {
                    answer.push_back({nums[i], nums[startp], nums[endp]});
                    
                    startp++;
                    endp--;

                    // skip duplicates for startp
                    while(startp < endp && nums[startp] == nums[startp - 1]) startp++;

                    // skip duplicates for endp
                    while(startp < endp && nums[endp] == nums[endp + 1]) endp--;
                }
                else if(sum < 0) {
                    startp++;
                }
                else {
                    endp--;
                }
            }
        }

        return answer;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = obj.threeSum(nums);

    for (auto &triplet : ans) {
        cout << triplet[0] << " " << triplet[1] << " " << triplet[2] << endl;
    }

    return 0;
}

// Need to lookup this one logic very carefully : tommorow moring 