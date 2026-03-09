class Solution {
public:
    bool areOccurrencesEqual(string s) {

        sort(s.begin(), s.end());

        int count = 1;
        int prev = 0;

        for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i-1]){
                count++;
            }
            else{
                if(prev == 0){
                    prev = count;
                }else if(prev != count){
                    return false;
                }
                count = 1;
            }
        }

        if(prev == 0) return true;
        return prev == count;
    }
};