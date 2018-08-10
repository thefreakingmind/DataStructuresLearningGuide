#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> V(5);
  V[0] = 1;
  V[1] = 3;
  V[2] = 2;
  V[3] = 5;
  V[5] = 4;
  sort(V.begin(), V.end());
  for(int i=0; i<=V.size(); i++)
  {
	cout << V[i] << endl;
  }
}


