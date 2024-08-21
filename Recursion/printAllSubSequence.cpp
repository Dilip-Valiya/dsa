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

void printAll(vector<int> &ans, vector<int> arr, int ind)
{
  int n = arr.size();
  if (ind == n)
  {
    printArr(ans);
    return;
  }
  ans.push_back(arr[ind]);
  printAll(ans, arr, ind + 1);
  ans.pop_back();
  printAll(ans, arr, ind + 1);
}

int main()
{
  vector<int> arr = {1, 3, 2};
  vector<int> ans;
  printAll(ans, arr, 0);
  return 0;
}