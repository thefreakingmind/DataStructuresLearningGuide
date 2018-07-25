#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
  vector<int>MyVec(20);
  iota(begin(MyVec), end(MyVec), 1);
  for(int i=0; i<=10; i++)
  {
	if((i%2) ==0)
	{
	  cout << "Even" << endl;
	}
	else
	{
	  cout << "Odd" << endl;
	}
  }
}

  
