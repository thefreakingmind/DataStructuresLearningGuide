#include <iostream>

using namespace std;

int main()
{
  int a=100;
  for(int i=2; i<a; i++)
  {
	if(a%i==0)
	{
	  cout << i <<  "is Not Prime" << endl;
	}
	else {
	  cout << i <<  "is Prime" << endl;

	}
  }
}


