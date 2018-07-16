#include <iostream>

using namespace std;

struct Node{
  int data;
  Node* next;
};

struct Node *head;

void Insert(int x)
{
  Node *Temp = new Node;
  Temp->data = x;
  Temp->next = NULL;
  if (head!=NULL) Temp->next= head;
  head = Temp;
}
void print()
{
  Node *temp = head;
  cout << "List is: " << endl;
  while (temp!=NULL)
  {
	cout << temp->data;
	temp = temp->next;
  }
  cout << "\n" << endl;
}

//Driver Program
int main()
{
  head = NULL;
  int x;
  int n;
  cout << "How Many Number You want to Enter" << endl;
  cin >> n;
  cout << "Enter The List";
  for(int i=0; i<n; i++)
  {
	cin >> x;
	Insert(x);
	print();
  }
  return 0;
}

