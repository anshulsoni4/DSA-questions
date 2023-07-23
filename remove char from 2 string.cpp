#include<bits/stdc++.h>

using namespace std;
string solve(string str1, string str2) {
  string ans;
//   1st string me iterate karte jao and flag ko zero rakho 
  for (int i = 0; i < str1.length(); i++) {
    int flag = 0;
    // ssecond string me compare karo 1st se ki equal hai koi element ya nahi
    for (int j = 0; j < str2.length(); j++) {
      if (str1[i] == str2[j]) {
        //   ha equal hoga toh flag ko 1 krdo
        flag = 1;
      }
    }
    // and now insert the value sttring 1 ko compare krke bola string 2 me nahi hai
    if (flag != 1)
      ans.push_back(str1[i]);
  }
  return ans;
}
int main() {

  // Input string
  string str1 = "abcdef";
  string str2 = "cefz";

  cout << "Final string 1:" << "\n";
  cout << solve(str1, str2) << "\n";
  return 0;
}