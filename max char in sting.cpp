
#include <iostream>

using namespace std;

// char return krna hai toh char wala fucntion leliya
char maxOccur(string s){
    char ans;
    // max freq  variable me store krenge freq, and count ka array bnaenge jisme 256 characters hai
    // fir iterate krne ke baad count array ko badhaenge aur dekhenge ki max freq se bada hai ya nahi
    // agar bada hai toh max freq me daaldo count array and ans char chiye toh usme vo current element
    int maxFreq = 0, l = s.size();
    int count[256] = {0}; 
    for(int i=0; i<l; i++){
        count[s[i]]++;
        if(count[s[i]] > maxFreq){
            maxFreq = count[s[i]];
            ans = s[i];
        }
    }
    return ans;
}

int main()
{
    string s1 = "ppalindrome";
    cout<<maxOccur(s1);

    return 0;
}