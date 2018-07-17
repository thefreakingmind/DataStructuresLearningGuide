#include <iostream>
#include <vector>

using namespace std;
//Creating a Node
struct Node{
  int data;
  Node *next;
};

struct Node *head; //Head Node Storing the Address of First Node


int main()
{
  head=NULL; //Empty List
  int x
