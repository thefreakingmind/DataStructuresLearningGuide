#include <iostream>

using namespace std;


int main()
{
  int a=5;
  int *p = &a;
  cout << &p << endl;
  cout << &p+1 << endl;
}
