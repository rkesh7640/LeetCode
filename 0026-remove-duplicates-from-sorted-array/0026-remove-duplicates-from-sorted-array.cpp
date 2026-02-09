#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0,n = nums.size(),j = 1;

          while(j < n){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
            j++;
          }
          return i + 1;
    }
};
