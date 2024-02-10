#include <iostream>
using namespace std;

void print(int n)
{
  if (n == 0)
    return;
  // cout << n << endl; // for printing N to 1
  print(n - 1);
  cout << n << endl; // For backtrack
}

int main()
{
  print(3);
}