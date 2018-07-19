#include <iostream>

using namespace std;

int Swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
  cout << "A: " << a << " " << "B: " << b << endl;
}


int main()
{
  int a;
  int b;
  cout << "Enter A" << endl;
  cin >> a;
  cout << "Enter B" << endl;
  cin >> b;
  cout << "Number Before Swap" << endl;
  cout << "A: " << a << " "  << "B: " << b  << endl;
  Swap(a,b);
  
  return 0;
}
