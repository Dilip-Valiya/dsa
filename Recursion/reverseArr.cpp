#include <iostream>
#include <vector>
using namespace std;

void reverseArr(vector<int> &arr, int l, int r)
{
  if (l >= r)
    return;
  swap(arr[l], arr[r]);
  reverseArr(arr, l + 1, r - 1);
}

int main()
{
  vector<int> arr;
  for (int i = 0; i < 5; i++)
  {
    arr.push_back(i + 1);
  }
  reverseArr(arr, 0, arr.size() - 1);
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}