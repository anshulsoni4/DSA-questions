class Solution {
public:
    bool isAnagram(string s, string t) {
        // legth same honi chiye
        if(s.length() != t.length()) return false;

        // char array bnaya, 
        int char_counts[26] = {0};
        // loop kiya and samajh agya ki 
        // agar s me element hai t me nahi toh count char ka 
        // same nahi and anagram nahi hai
        for(int i=0; i<s.length(); i++){

            // same cchiz char array ko check kiya
            // agar s me same element aya toh increment
            // t meee samee aya toh decrement
            // ground state me ajaoge
            char_counts[s[i]-'a']++;
            char_counts[t[i]-'a']--;
        }
            // agar count zeroo nahi hai toh fals hoga valid ahi hai
        for(int count : char_counts){
            if(count != 0){
            return false;
            }
        }
        return true;
    }
};