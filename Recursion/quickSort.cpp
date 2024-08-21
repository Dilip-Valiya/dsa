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

int findPartIndex(vector<int> &arr, int low, int high)
{
  int pivot = low;
  int i = low, j = high;
  while (i < j)
  {
    while (i < high && arr[i] <= arr[pivot])
      i++;
    while (j > low && arr[j] > arr[pivot])
      j--;
    if (i < j)
    {
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[low], arr[j]);
  return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
  if (low < high)
  {
    int partInd = findPartIndex(arr, low, high);
    quickSort(arr, low, partInd - 1);
    quickSort(arr, partInd + 1, high);
  }
}

int main()
{
  vector<int> arr = {3, 2, 6, 5, 4, 1, 7, 9, 8};
  quickSort(arr, 0, 8);
  printArr(arr);
}