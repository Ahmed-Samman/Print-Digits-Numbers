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

	for (int i = (65 + Num - 1); i >= 65 ; i--) //5
	{

		for (int j = i; j >= 65; j--)
		{

			cout << char(i); 
		}
		cout << endl;
	}

}


int main()
{


	Print_Inverted_Pattern(Check_Positive_Num("Please enter the number: "));

	return 0;
}