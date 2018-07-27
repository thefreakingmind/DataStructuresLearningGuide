#include <iostream>
#include <deque>

using namespace std;

int main()
{
  deque<int> d(5);
  
  for(int i=0; i<5; i++)
  {
	d[i] = i+5;
  }
  d.push_back(10);
  d.push_front(10);

  for(int i=0; i<=d.size(); i++)
  {
	cout << d[i] << endl;
  }
}

