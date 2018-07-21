//Binary Search Tree

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;
};

Node *newnode(int data)
{
  Node *node = new Node();
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return (node);
}


int main()
{
  Node *root = newnode(1);
  root->left = newnode(2);
  root->right = newnode(3);
}
  



