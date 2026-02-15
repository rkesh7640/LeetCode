class Solution {
public:
    bool isSubsequence(string &s, string &p, vector<int>& removable, int k) {
        vector<bool> removed(s.size(), false);
        
        for(int i = 0; i < k; i++) {
            removed[removable[i]] = true;
        }
        int j = 0;

        for(int i = 0; i < s.size() && j < p.size(); i++) {
            if(!removed[i] && s[i] == p[j]) {
                j++;
            }
        }
        return j == p.size();
    }
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int left = 0, right = removable.size();

        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(isSubsequence(s, p, removable, mid)) {       
                left = mid + 1;  
            } else {
                right = mid - 1; 
            }
        }
        return right;
    }
};