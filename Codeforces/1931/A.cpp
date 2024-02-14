// https://codeforces.com/problemset/problem/1931/A

#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if (n > 52)
    {
      cout << string(1, char(n - 52 + 96)) + "zz" << endl;
    }
    else if (n > 28)
    {
      cout << "a" + string(1, char(n - 27 + 96)) + "z" << endl;
    }
    else
    {
      cout << "aa" + string(1, char(n - 2 + 96)) << endl;
    }
  }
}