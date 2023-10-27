class Solution {
public:
    string reverseWords(string s) {
        int n =s.size(), i=0;

        // make a empty string
        string ans = "";
        
        while(i<n){
            // ek temporary string bnayi
            string temp = "";
            
            // iterate kiya, and first agar khali space hai, toh aage chalo
            while(s[i] == ' ' && i<n){
                i++;
            }
            // ab space nahi hai, element hai, toh, temp me daaldo, aur chalo
            while(s[i] != ' ' && i<n){
                temp += s[i];
                i++;
            }

            // toh temp agar filled hai, and ans khali
            if(temp.size() > 0){
                if(ans.size() == 0)
                // ans ko temp bna denge and ans ko return
                ans = temp;
                else
                // nahi toh simply ans ko temp aur ans bnake return
                ans = temp+" "+ans;
            }
            
        }
        return ans;
    }
};