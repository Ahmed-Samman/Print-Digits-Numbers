#include<iostream>
#include<cstdlib>


using namespace std;

int RandomNumber(int From, int To)
{
	
	int Random = rand() % (To - From + 1) + From;
	
	return Random;
}


int main()
{
	srand((unsigned)time(NULL));

	//cout << rand() % 10 << endl;
	//cout << rand() % 10 << endl;

	cout << RandomNumber(1, 5) << endl;
	cout << RandomNumber(1, 5) << endl;
	cout << RandomNumber(1, 5) << endl;

	return 0;
}