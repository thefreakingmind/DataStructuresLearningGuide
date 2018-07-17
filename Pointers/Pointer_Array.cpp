#include <iostream>
using namespace std;

int main()
{
  int arr[4] = {1,2,3,4};
  for(int i=0; i<=4; i++)
  {
	cout << "Address: " <<  &arr[i] << endl;
	cout << "Values: " << *(arr+i) << endl;
  }
}
