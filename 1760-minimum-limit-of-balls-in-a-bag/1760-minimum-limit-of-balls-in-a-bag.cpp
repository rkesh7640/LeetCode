class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int left = 1;
        int right = *max_element(nums.begin(),nums.end());

        while(left < right){
            int mid = left + (right - left)/2;
            int op = 0;

            for(auto ball : nums){
                op += (ball-1)/mid;
            }
            if(op <= maxOperations){
                right = mid;
            }else{
                left = mid + 1;
            }
        }
        return left;
    }
};