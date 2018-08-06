#include <iostream>

using namespace std;

int main()
{
  int arr[3][3]={{1,2,3},{3,4,5},{4,2,4}};
  for(int i=0; i<3; i++)
  {
	for(int j=0; j<3; j++)
	{
	  cout << arr[i][j];
	}
	cout << endl;
  }
}

