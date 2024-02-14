#include <iostream>
using namespace std;

bool isPali(string s, int st, int en)
{

  if (st >= en)
    return true;
  // cout << "debug " << s[st] << " " << s[en] << endl;
  return s[st] == s[en] && isPali(s, ++st, --en);
}

bool isPalindrome(string s)
{
  return isPali(s, 0, s.size() - 1);
}

int main()
{
  cout << isPalindrome("madam");
  return 0;
}