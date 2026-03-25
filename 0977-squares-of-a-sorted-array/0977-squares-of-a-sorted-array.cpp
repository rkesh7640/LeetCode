class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res(nums.size());
        int i=0;
        int j = nums.size()-1;
        int k=j;
        while(i<=j){
            int isq = nums[i] * nums[i];
            int jsq = nums[j] * nums[j];

            if(isq <= jsq){
                res[k--] = jsq;
                j--;
        
            }else{
                res[k--] = isq;
                i++;
            }
        }
        return res;
    }
};