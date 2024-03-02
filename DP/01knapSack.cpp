#include <iostream>
using namespace std;

int knapSack(int n, int w[], int p[], int W)
{
  int dp[n + 1][W + 1];
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= W; j++)
    {
      if (i == 0 || j == 0)
      {
        dp[i][j] = 0;
      }
      else if (j >= w[i - 1])
      {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + p[i - 1]);
      }
      else
        dp[i][j] = dp[i - 1][j];
    }
  }
  return dp[n][W];
}

int main()
{
  int n = 5;
  int w[] = {5, 2, 4, 6, 7};
  int p[] = {4, 3, 4, 7, 7};
  int W = 15;
  cout << knapSack(n, w, p, W) << endl;
  return 0;
}