class Solution {
public:
    int maxVowels(string s, int k) {
        int ans = 0,windowSum=0;
        for(int i = 0; i < k; i++){
            if(
                s[i] == 'a' ||
                s[i] == 'e' ||
                s[i] == 'i' ||
                s[i] == 'o' ||
                s[i] == 'u' 
                ){
                windowSum++;
            }
        }
        ans = windowSum;

        for(int i = k; i < s.length();i++){
            char prevchar = s[i-k];
            if(
                prevchar == 'a' ||
                prevchar == 'e' ||
                prevchar == 'i' ||
                prevchar == 'o' ||
                prevchar == 'u'
                ){
                windowSum--;
            }
            char newchar = s[i];
            if(
                newchar == 'a' ||
                newchar == 'e' ||
                newchar == 'i' ||
                newchar == 'o' ||
                newchar == 'u' 
                ){
                windowSum++;
            }
            ans = max(ans,windowSum);
        }
        return ans;
    }
};