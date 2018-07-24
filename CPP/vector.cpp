#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
  vector <int> myVec(10);
  iota(begin(myVec), end(myVec), 1);
  for(int i=0; i<myVec.size(); i++)
  {
	cout << "Number is :" << endl;
	cout << myVec[i] << endl;
  }
  return 0;
}

