#include <iostream>
using namespace std;

// n represent (n+1)th number(start from 0)
int fibonacci(int n)
{
  if (n == 0 || n == 1)
    return n;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
  cout << fibonacci(6) << endl;
}