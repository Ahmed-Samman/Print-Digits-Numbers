#include<iostream>
#include<cmath>
using namespace std;

int Check_Positive_Number(string Message)
{
	int Num;

	do
	{
		cout << Message;
		cin >> Num;

		if (Num <= 0)
			cout << "The numbers must be grater than 0: ";

	} while (Num <= 0);

	return Num;
}


void Sum_Numbers(int Num)
{
	int Sum = 0, Reminder = 0;

	while (Num > 0)
	{
		Reminder = Num % 10;
		Sum += Reminder;
		Num = Num / 10;
	}
	cout << "Sum Of Digits: " << Sum << endl;
}


int main()
{


	Sum_Numbers(Check_Positive_Number("Please enter the number: "));


	return 0;

}