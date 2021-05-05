#include<iostream>

using namespace std;

class heater
{
	float temp;

	public: heater() //conctructor
	{
		temp = 15; //use temp only no other variable required
	}

	void warmer()
	{
		temp += 5;

	}

	/*void cooler()
	{
		temp -= 5;

	}
	*/
	void print()
	{
		cout<<temp;

	}
};

int main ()
{

	heater today;
	today.print();

	return 0;
}

