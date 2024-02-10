#include <iostream>
using namespace std;

void print(string name, int count)
{
  if (count == 0)
    return;
  cout << name << " " << count << endl;
  print(name, --count);
  cout << "count = " << count << endl; // to understand recursion tree
}

int main()
{
  print("Dilip Valiya", 2);
}