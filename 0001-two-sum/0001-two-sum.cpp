class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     map<int,int>m;
     
     int n = nums.size();
     for(int i = 0; i < n; i++){
        int j = target-nums[i];
        if(m.count(j)){
            return {m[j],i};
        }
        m[nums[i]] = i;
     }
     return {-1,-1};
    }
};