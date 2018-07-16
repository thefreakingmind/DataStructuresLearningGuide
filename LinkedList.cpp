#include <iostream>

using namespace std;

struct Node{
  int data;
  Node* next;
};

struct Node *head;

void Insert(int x)
{
  Node *Temp = new Node();
  Temp->data = 2;
  Temp->next = NULL;
  head = Temp;
}
//Driver Program
int main()
{
  head = NULL;
  int x;
  int n;
  cout << "Enter The Number" << endl;
  cin >> n;
  for(int i=0; i<n; i++)
  {
	cin >> x;
	Insert(x);
  }
  return 0;
}

