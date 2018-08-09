#include <iostream>

using namespace std;

int main()
{
  int m;
  int x = 1;
  int n;
  for(int i=2; i<=n; i++)
  {
	x = (x*i)%m;
  }
  cout << x%m << endl;
}

