
#include <iostream>
using namespace std;

// returns true if the string text is a palindrome, and false otherwise
bool is_palindrome(string text)
{
  // Algorithm: Check each character at the beginning of the string with its
  // corresponding character at the end of the string, and if we find a
  // character that does not match we know it is not a palindrome.  By
  // corresponding character we mean the first character is checked against
  // the last character, the 2nd character is checked against the 2nd last
  // character, the 3rd character is checked aginst the 3rd last character
  // and so on.  We only need to do this until we reach the middle of the
  // string (as given by text.length() / 2) as at that point we will have
  // established the string matches its reverse.  Notably if a string like
  // "abcdcba" contains an odd amount of characters, due to integer division
  // 7 / 2 we'll get back 3 as the result of text.length() / 2.  So this
  // means we won't check if the middle character equals itself, which
  // isn't necessary because we know it does!
  for (int i = 0; i < text.length() / 2; i++)
    if (text[i] != text[text.length() - i - 1])
      return false;

  // Only once we have shown that all characters match with their corresponding
  // characters at the end of the string can we say the string is a palindrome.
  return true;
}

int main()
{
  // Some test strings to test our function with...
  string test1 = "abccba";  // abccba (reverse) <- a palindrome

  // We should get back that test1 is a palindrome
  if (is_palindrome(test1))
    cout << test1 << "    -> is a palindrome" << endl;
  else
    cout << test1 << "    -> is NOT a palindrome" << endl;

  return 0;
}