#include<iostream>
#include<cmath>
using namespace std;

int Check_Positive_Number(string Message)
{
	int Num;

	do
	{
		cout << Message << endl;
		cin >> Num;

		if (Num <= 0)
			cout << "The numbers must be grater than 0: ";

	} while (Num <= 0);

	return Num;
}

int Frequency_Numbers(int Num, short Digit_To_Check)
{
	int Reminder = 0, Count = 0;

	while (Num > 0)
	{
		Reminder = Num % 10;
		Num = Num / 10;
		
		if (Reminder == Digit_To_Check)
		{
			Count++;
		}
	}
	return Count;
}


int main()
{
	int Number = Check_Positive_Number("Please enter the number: ");
	int Digit_To_Check = Check_Positive_Number("Please enter Digit number to check: ");

	cout << "\nDigit " << Digit_To_Check << " Frequency is "
		<< Frequency_Numbers(Number, Digit_To_Check)<< " Time(S)."<< endl;


	return 0;

}