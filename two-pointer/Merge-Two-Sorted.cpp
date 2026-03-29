#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=m+n-1,i=m-1,j=n-1;

        while(i>=0 && j>=0){
             if(nums1[i]<nums2[j]){
                nums1[k]=nums2[j];
                j--;
                k--;
            } // When the nums 2 value is greater than we will do this.
            else{ 
              nums1[k]=nums1[i];
              k--;
              i--;
            }
        }
        // After the one array end we will move to fill up another one: 

        while(i>=0){ // If the i one is empty:
            nums1[k]=nums1[i];
            k--;
            i--;
        }
        while(j>=0){
            nums1[k]=nums2[j];
            k--;
        j--;
        }  
    }
};

int main() {
    Solution obj;

    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // extra space for nums2
    int m = 3;

    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    obj.merge(nums1, m, nums2, n);

    for (int x : nums1) {
        cout << x << " ";
    }

    return 0;
}