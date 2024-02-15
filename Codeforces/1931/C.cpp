// https://codeforces.com/problemset/problem/1931/C

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v;
    int t;

    for (int i = 0; i < n; i++)
    {
      cin >> t;
      v.push_back(t);
    }
    int sc = 1;
    int ec = 1;
    int j = 1;
    while (j < n && v[j] == v[0])
    {
      sc++;
      j++;
    }
    j = n - 2;
    while (j >= 0 && v[j] == v[n - 1])
    {
      ec++;
      j--;
    }
    if (v[0] == v[n - 1])
    {
      if ((n - (sc + ec)) > 0)
        cout << (n - (sc + ec)) << endl;
      else
        cout << 0 << endl;
    }
    else
    {
      cout << min(n - sc, n - ec) << endl;
    }
  }
}