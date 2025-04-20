#include <iostream>
#include<cmath>
using namespace std;

int Check_Positive_Num(string Message)
{
	int Num = 0;
	do
	{
		cout << Message << endl;
		cin >> Num;

		if (Num <= 0)
			cout << "Number must be > 0:\n";

	} while (Num <= 0);

	return Num;
}

void Print_Inverted_Pattern(int Num)
{
	cout << "--------\n";

	for (int i = 1; i <= Num; i++)
	{
		for (int c = 1; c <= i; c++)
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{


	Print_Inverted_Pattern(Check_Positive_Num("Please enter the number: "));

	return 0;
}