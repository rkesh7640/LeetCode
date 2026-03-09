class Solution {
public:
    int lengthOfLastWord(string str) {
        int j=str.length()-1;

        while(j>=0 && str[j]==' '){
            j--;
        }

        int count=0;
        while(j>=0 && str[j]!=' '){
            count++;
            j--;
        }
        return count;
    }
};