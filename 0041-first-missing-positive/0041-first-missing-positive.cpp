class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>s;

        for(auto x : nums){
            s.insert(x);
        }

        int i = 1;
        while(true){
            if(s.find(i) == s.end()){
                return i;
            }
            i++;
        }
    }
};