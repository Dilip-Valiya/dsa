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

void merge(vector<int> &arr, int low, int mid, int high)
{
  vector<int> temp;
  int i = low, j = mid + 1;

  while (i <= mid && j <= high)
  {
    if (arr[i] <= arr[j])
    {
      temp.push_back(arr[i]);
      i++;
    }
    else
    {
      temp.push_back(arr[j]);
      j++;
    }
  }

  while (i <= mid)
  {
    temp.push_back(arr[i]);
    i++;
  }

  while (j <= high)
  {
    temp.push_back(arr[j]);
    j++;
  }

  // Copy elements back to original array
  for (int k = low; k <= high; k++)
  {
    arr[k] = temp[k - low];
  }
}

void mergeSort(vector<int> &arr, int low, int high)
{
  if (low < high)
  {
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
  }
}

int main()
{
  vector<int> arr = {3, 2, 6, 5, 4, 1, 7, 9, 8};
  mergeSort(arr, 0, 8);
  printArr(arr);
}