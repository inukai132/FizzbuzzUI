#include <iostream>
#include <fstream>
using namespace std;

void fizzBuzz(int start = 1, int end = 100, ostream &output = cout)
{
	for (int i = start; i <= end; i++)
	{
		if (i % 3 == 0)
			output << "Fizz";
		if (i % 5 == 0)
			output << "Buzz";
		if (i % 3 != 0 && i % 5 != 0)
			output << i;
		output << endl;
	}
}

int main()
{
	ofstream file("./fizz.out");
	fizzBuzz(-500,500,file);
	return 0;
}