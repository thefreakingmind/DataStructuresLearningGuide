/*This is a Vector. Vector are like Dynamic Arrays
 * They are Built in STL
 * This is Very Much easy for work.
 * This is also testing for loop in C++14.
*/

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
  vector <int> myVec(10);
  vector<int>New(4);
  New[0] = 4;
  New[1] = 2;
  New[2] = 3;
  New[3] = 4;
  New.push_back(10);
  New.push_back(20);
  iota(begin(myVec), end(myVec), 1);
  for(int i=0; i<myVec.size(); i++)
  {
	cout << "Number is :" << endl;
	cout << myVec[i] << endl;
  }
  for(auto y: New)
  {
	cout << y << endl;
  }
  return 0;
}

