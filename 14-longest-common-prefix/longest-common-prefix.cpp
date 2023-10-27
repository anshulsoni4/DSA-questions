class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // check ki string khali toh nahi hai
        if(strs.size() == 0) return "";

        // ek string bnnayi usme first eelement dala
        string prefix = strs[0];
        
        // iterate kiya
        for(int i = 1; i<strs.size(); i++){
            // now we check ki agar current string prefix waale ke sath match hui hai (substring match hui hai) ya nahi
            while(strs[i].find(prefix)!=0){
                // aur fir ese krte hue prefix me uski matching suub str daali
                prefix = prefix.substr(0, prefix.length()-1);
            }
        }
        return prefix;
    }
};