#include <iostream>
using namespace std;

void print(int n, int i)
{
  if (n == i - 1)
    return;
  // cout << i << endl; // print 1 to N
  print(n, i + 1);
  cout << i << endl; // backtrack
}

int main()
{
  print(3, 1);
}