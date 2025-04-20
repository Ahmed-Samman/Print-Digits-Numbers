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

int Frequency_Numbers(int Num, short i)
{
	int Reminder = 0, Count = 0;

	while (Num > 0)
	{
		Reminder = Num % 10;
		Num = Num / 10;
		
		if (Reminder == i)
		{
			Count++;
		}
	}
	return Count;
}

void Digit_To_Check(int Num)
{

	for (short i = 1; i < 10; i++)
	{
		short Digit_FrFrequency = 0;
		Digit_FrFrequency = Frequency_Numbers(Num, i);

		if (Digit_FrFrequency > 0)
		{
			cout << "\nDigit " << i << " Frequency is "
				<< Digit_FrFrequency << " Time(S)." << endl;
		}
	}
}

int main()
{


	int Number = Check_Positive_Number("Please enter the number: ");
	Digit_To_Check(Number);
		
	return 0;

}