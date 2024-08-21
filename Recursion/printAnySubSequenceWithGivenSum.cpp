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

bool printAnyOne(vector<int> &ans, vector<int> arr, int ind, int sum, int curr_sum)
{
  int n = arr.size();

  if (ind == n)
  {
    if (curr_sum == sum)
    {
      printArr(ans);
      return true;
    }
    return false;
  }
  ans.push_back(arr[ind]);
  if (printAnyOne(ans, arr, ind + 1, sum, curr_sum + arr[ind]))
    return true;

  ans.pop_back();
  if (printAnyOne(ans, arr, ind + 1, sum, curr_sum))
    return true;
  return false;
}

int main()
{
  vector<int> arr = {1, 3, 2, 1, 2, 3};
  vector<int> ans;
  int sum = 3;
  printAnyOne(ans, arr, 0, sum, 0);
  return 0;
}