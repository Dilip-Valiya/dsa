#include <iostream>
using namespace std;

void print(int n, int i)
{
  if (n == i - 1)
    return;
  print(n, i + 1);
  cout << i << endl;
}

int main()
{
  print(3, 1);
}