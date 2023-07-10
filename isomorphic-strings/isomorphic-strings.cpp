class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int size = s.size();
        // character array
        char seen[128] = { };
        for(int i=0; i<size; i++){
            char c = s[i];

            if(!seen[c]){
                for(char s : seen)
                    if(s==t[i])
                        return false;
                    
                
                seen[c] = t[i];
            }
            else if(seen[c] != t[i])
                return false;
            
            

        }
        return true;
    }
};