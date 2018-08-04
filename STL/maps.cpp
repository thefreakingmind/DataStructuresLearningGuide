#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
  map<string, int> m;
  m["Mango"] = 10;
  m["Banana"] = 20;

  cout << m["Mango"] << endl;
}
