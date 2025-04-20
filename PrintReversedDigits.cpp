#include<iostream>
#include<cmath>
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
	int Reminder = 0;
	cout << "-----\n";

	while (Num > 0)
	{
		Reminder = Num % 10;
		Num = Num / 10;
		//cout << Num << endl;
		cout << Reminder << endl;
	}
}

int main()
{

	Print_Reverse_Numbers(Check_Positive_Num("Please enter the numbers: "));


	return 0;
}