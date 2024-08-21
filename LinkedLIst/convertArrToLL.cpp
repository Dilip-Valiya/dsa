#include <iostream>
#include <vector>

using namespace std;

struct Node
{
public:
  int data;
  Node *next;

public:
  Node(int data)
  {
    data = data;
    next = nullptr;
  }
};

Node *convertToLL(vector<int> &arr)
{
  Node *head = new Node(arr[0]);
  Node *mover = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}

int main()
{
  vector<int> arr = {1, 2, 3, 4};
  Node *head = convertToLL(arr);
  cout << "head = " << head->data;
}