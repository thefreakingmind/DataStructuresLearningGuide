//Coding is Love. Marry it


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
void Inorder(struct Node *node)
{
  if(node==NULL)return;
  cout << node->data;
  Inorder(node->left);
  Inorder(node->right);
}
int main()
{
  struct Node *root = Newnode(1);
  root->left = Newnode(3);
  root->right = Newnode(4);
  root->left->left = Newnode(5);
  Inorder(root);
  return 0;
}

