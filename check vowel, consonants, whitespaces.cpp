#include <bits/stdc++.h>
using namespace std; 

int dekho(string s, int len) {
    int vowel = 0, consonants = 0, whitespace = 0;
    // ek loop lgaya humne lowercase me krne ke liye 
    for(int i =0; i<s.length(); i++){
        s[i] = tolower(s[i]);
    }
    
    // ab ek lgare iterate krne ke liye
    for(int i =0; i<s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vowel++;
        }
        if(s[i] >= 'a' && s[i] <= 'z'){
            consonants++;
        }
        else if(s[i] == ' '){
            whitespace++;
        }
    }
    cout<<vowel<<" Vowels"<<endl;
    cout<<consonants<<" Consonants"<<endl;
    cout<<whitespace<<" Whitespaces"<<endl;
 }


int main() {
  string str = "Take u forward is Awesome";
  int length = str.length();
  dekho(str, length);
  return 0;
}