// https://codeforces.com/contest/1929/problem/B

#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n;
    cin >> k;
    int mt = 4 * n - 4;
    int res = 0;

    if (k > mt)
    {
      res += mt / 2;
      k -= mt;
    }
    else
    {
      res += (k / 2) + (k & 1);
      k = 0;
    }
    if (k > 0)
    {
      res += k;
    }
    cout << res << endl;
  }
}