class Solution {
public:
    void sortColors(vector<int>& nums) {
        int countZero=0;
        int countOne=0;
        int countTwo=0;

        for(auto v : nums){
            if(v == 0){
                countZero++;
            }else if(v == 1){
                countOne++;
            }else{
                countTwo++;
            }
        }

        int i = 0;
        while(countZero != 0){
            nums[i] = 0;
            countZero--;
            i++;
        }
        while(countOne != 0){
            nums[i] = 1;
            countOne--;
            i++;
        }
        while(countTwo != 0){
            nums[i] = 2;
            countTwo--;
            i++;
        }
    }
};