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

int Reverse_Numbers(int Num)
{
	int Reminder = 0, Number2 =0;
	
	while (Num > 0)
	{
		Reminder = Num % 10;
		Num = Num / 10;
		Number2 = Number2 * 10 + Reminder;
	}
	return Number2;
}

void Print_Digits(int Num)
{
	int Reminder = 0;
	cout << "-----\n";

	while (Num > 0)
	{
		Reminder = Num % 10;
		Num = Num / 10;
		cout << Reminder << endl;
	}
}

int main()
{

	Print_Digits(Reverse_Numbers(Check_Positive_Num("Please enter the numbers: ")));


	return 0;
}