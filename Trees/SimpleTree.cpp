#include <iostream>

using namespace std;

//Creating Structure of The Tree
struct Node{
  int data;
  Node *left;
  Node *right;
};
//Tree Structure
struct Node *Newnode(int data)
{
  struct Node *node= new Node();

  //Data 
  node->data= data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}

int main()
{
  struct Node *root = Newnode(1);
  root->left = Newnode(3);
  root->right = Newnode(4);
  root->left->left = Newnode(5);
  return 0;
}

