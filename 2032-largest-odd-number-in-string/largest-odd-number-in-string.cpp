class Solution {
public:
    string largestOddNumber(string num) {
        // loop lgaya peeche se string me
        for(int i=num.size() -1; i>=0; i--){
            // character me string ka element dala
            char c = num[i];
            if(c%2 == 1){
                return num.substr(0, i+1);
            }
        }
        return "";
    }
};