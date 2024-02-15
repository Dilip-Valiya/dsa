// https://codeforces.com/contest/1929/problem/A

#include <iostream>
#include <vector>
#include <algorithm>
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
    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 1; i < v.size(); i++)
    {
      sum += v[i] - v[i - 1];
    }
    cout << sum << endl;
  }
}