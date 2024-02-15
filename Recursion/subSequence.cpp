#include <iostream>
#include <vector>
using namespace std;

void printArr(int i, vector<int> res, vector<int> v)
{
  // base cond.
  if (i >= v.size())
  {
    cout << "{ ";
    for (int j = 0; j < res.size(); j++)
    {
      cout << res[j] << " ";
    }
    cout << "}" << endl;
    return;
  }
  // core logic
  res.push_back(v[i]);
  printArr(i + 1, res, v);
  res.pop_back();
  printArr(i + 1, res, v);
}

int main()
{
  vector<int> v;
  v.push_back(3);
  v.push_back(1);
  v.push_back(2);
  vector<int> res;
  printArr(0, res, v);
}