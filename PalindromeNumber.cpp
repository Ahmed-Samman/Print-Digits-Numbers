#include<iostream>
#include<cmath>
using namespace std;

//Palindrome is a number that reads the same from rigth to left. like this (12321)

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

int Reverse_Numbers(int Num)
{
	int Reminder = 0, Number2 = 0;

	while (Num > 0)
	{
		Reminder = Num % 10;
		Num = Num / 10;
		Number2 = Number2 * 10 + Reminder;
	}
	return Number2;
}

void Print_Palindrome_Or_Not()
{

	int Number = Check_Positive_Num("Please enter the number: ");
	int Revers_Num = Reverse_Numbers(Number);

	if (Number == Revers_Num)
		cout << "\nYes, it's a Polindrome numbre.\n";
	else
		cout << "\nNo, it's Not a Polindrome numbre.\n";
}

int main()
{


	Print_Palindrome_Or_Not();
	

	return 0;
}