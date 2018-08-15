#include <iostream>

using namespace std;

class DateClass
{
  public:
	int year;
	int month;
	int day;
	void Print()
	{
	  cout << year<< "/" << month<<"/" << day;
	}
};

int main()
{
  DateClass today = {2014,12,12};
  today.Print();
}



