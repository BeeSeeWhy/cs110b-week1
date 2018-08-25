#include <iostream>
using namespace std;

int main()
{
	int choice, num1, num2, result;

	cout << "Enter your choice " << endl;
	cout << "1. Addition " << endl;
	cout << "2. Subtraction " << endl;
	cout << "3. Multiplication " << endl;
	cout << "4. Division " << endl;
	cout << "5. Square Root " << endl;
	cout << "6. Power " << endl;
	cin >> choice;


	switch (choice)
	{
	case 1 : 
		// do addition;
		break;
	case 2 : 
		// subtraction
		break;
	default
	}
	if (choice == 1)
	{
		//do addition
		cout << "Enter first number: " << endl;
		cin >> num1;

		cout << "Enter second number: " << endl;
		cin >> num2;

		result = num1 + num2;
		cout << "The result is " << result << endl;		
	}
	else if (choice == 2)
	{
		//do subtraction
		cout << "Enter first number: " << endl;
		cin >> num1;

		cout << "Enter second numbe: " << endl;
		cin >> num2;

		result = num1 - num2;
		cout << "The result is " << result << endl;
	}
	else if (choice == 3)
	{
		//do multiplication
		cout << "Enter first number: " << endl;
		cin >> num1;

		cout << "Enter second number: " << endl;
		cin >> num2;

		result = num1 * num2;
		cout << "The result is " << result << endl;
	}
	else if (choice == 4)
	{
		//do division
		cout << "Enter first number: " << endl;
		cin >> num1;
		
		cout << "Enter second number: " << endl;
		cin >> num2;

		if (num2 == 0)
		{
			cout << "You cannot divide by 0" << endl;
			cout << "Enter second number: " << endl;
			cin >> num2;
		}

		result = num1 / num2;
		cout << "The result is " << result << endl;
	}
	else if (choice == 5)
	{
		//do square root
		cout << "Enter a number " << endl;
		cin >> num1;

		result = num1 / 2;
		cout << "The result is " << result << endl;
	}
	else 
	{
		cout << "You did not enter a choice available" << endl;
	}

	return 0;
	
}
 
