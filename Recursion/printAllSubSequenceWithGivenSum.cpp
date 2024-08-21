#include <iostream>
#include <vector>

using namespace std;

void printArr(vector<int> ans)
{

  if (ans.size() == 0)
  {
    cout << "{}" << endl;
    return;
  }
  for (auto num : ans)
  {
    cout << num << " ";
  }
  cout << endl;
}

void printAll(vector<int> &ans, vector<int> arr, int ind, int sum, int curr_sum)
{
  int n = arr.size();

  if (ind == n)
  {
    if (curr_sum == sum)
    {
      printArr(ans);
    }
    return;
  }
  ans.push_back(arr[ind]);
  printAll(ans, arr, ind + 1, sum, curr_sum + arr[ind]);
  ans.pop_back();
  printAll(ans, arr, ind + 1, sum, curr_sum);
}

int main()
{
  vector<int> arr = {1, 3, 2, 1, 2, 3};
  vector<int> ans;
  int sum = 3;
  printAll(ans, arr, 0, sum, 0);
  return 0;
}