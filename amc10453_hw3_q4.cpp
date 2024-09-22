// amc10453_hw3_q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//declare the const ints
//real number is a double
//convert using static cast 
//print new number
//account for negatives and 0

#include <iostream>
using namespace std;

int main()
{
	const int FLOOR_ROUND = 1;
	const int CEILING_ROUND = 2;
	const int ROUND = 3;
	int roundingMethod;
	double realNumber;
	

	cout << "Please enter a Real number: "; cin >> realNumber;
	cout << "Choose your rounding method: " << endl;
	cout << "1. Floor round" << endl;
	cout << "2. Ceiling round" << endl;
	cout << "3. Round to the nearest whole number" << endl;
	cin >> roundingMethod;

	switch (roundingMethod)
	{
		case FLOOR_ROUND:
			realNumber = static_cast<int>(realNumber);
			if (realNumber < 0)
			{
				realNumber -= 1;
			}
				cout << realNumber << endl;
			break;
		case CEILING_ROUND:
			if (realNumber != static_cast<int>(realNumber)) 
			{
				realNumber = static_cast<int>(realNumber) + 1;
			}
				cout << realNumber << endl;
			break;
		case ROUND:
			if (realNumber >= 0) 
			{
				realNumber = static_cast<int>(realNumber + 0.5);
			}
			else 
			{
				realNumber = static_cast<int>(realNumber - 0.5);
			}
			cout << realNumber << endl;
	default:
		break;
	}



	return 0;
}

