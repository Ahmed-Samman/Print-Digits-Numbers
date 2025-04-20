#include<iostream>
#include<string>
using namespace std;

int Check_Positive_Num(string Message)
{
	int Num;
	do
	{
		cout << Message << endl;
		cin >> Num;

		if (Num <= 0)
			cout << "Number must be > 0:\n";

	} while (Num <= 0);

	return Num;
}

void Print_Reverse_Numbers(int Num)
{
	cout << "Reverse of numbers:\n";
	cout << "-------";

	string st_N = to_string(Num);

	for (int i = st_N.length(); i >= 0; i--)
	{
		cout << st_N[i] << endl;
	}
}

int main()
{


	Print_Reverse_Numbers(Check_Positive_Num("Please enter the Number: "));

	return 0;
}