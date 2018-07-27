#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


int main()
{
  vector<int> vec(10);
  for(int i=0; i<=vec.size(); i++)
  {
	cin >> vec[i];
  }
  for(int i=0; i<=vec.size(); i++)
  {
	cout << vec[i] << endl;
  }
  vec.resize(12);
  vec[11] = 10;
  vec[12] = 13;
  vec.push_back(2);
  for(int i=0; i<=vec.size(); i++)
  {
	cout << vec[i] << endl;
  }
  return 0;
}
