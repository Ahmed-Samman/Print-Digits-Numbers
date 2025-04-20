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


int Reverse_Numbers(int Num)
{
	int Number2 = 0, Reminder = 0;

	while (Num > 0)
	{
		Reminder = Num % 10;
		Num = Num / 10;
		Number2 = Number2 * 10 + Reminder;
	}
	return Number2;
}
	


int main()
{

	cout << "\nThe Reverse is:\n"
		 <<	Reverse_Numbers(Check_Positive_Number("Please enter the number: "))
		<< endl;


	return 0;

}