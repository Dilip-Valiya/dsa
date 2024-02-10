#include <iostream>
using namespace std;

int counter = 0;

void print()
{
  // Base condition
  if (counter > 5)
    return;
  cout << counter << endl;
  counter++;
  // Recursive call
  print();
}

int main()
{
  print();
  return 0;
}