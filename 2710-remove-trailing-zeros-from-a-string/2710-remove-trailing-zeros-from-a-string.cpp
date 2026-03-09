class Solution {
public:
    string removeTrailingZeros(string num) {
        int i=num.size()-1;
        while(i>=0){
            if(num[i]=='0'){
                i--;
            }
            else{
                break;
            }
        }
        string ans="";
        int j=0;
        while(j<=i){
            ans+=num[j];
            j++;
        }
        return ans;
    }
};