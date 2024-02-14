// https://codeforces.com/problemset/problem/1931/B

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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> t;
      sum += t;
      v.push_back(t);
    }
    int avg = sum / n;
    int i;
    int total = 0;
    for (i = n - 1; i >= 0; i--)
    {
      total += (avg - v[i]);
      if (total < 0)
      {
        cout << "NO\n";
        break;
      }
    }
    if (total == 0)
      cout << "YES\n";
  }
}