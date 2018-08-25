#include <cmath>
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
	cout << "5. Square " << endl;
	cout << "6. Square  Root " << endl;
	cout << "7. Cube " << endl;
	cout << "8. Cube Root " << endl;
	cout << "9. Power " << endl;  
	cin >> choice;


	switch (choice)
	{
		case 1 : 
			// do addition;
			cout << "Enter first number: " << endl;
			cin >> num1;

			cout << "Enter second number: " << endl;
			cin >> num2;

			result = num1 + num2;
			cout << "The result is " << result << '.' << endl;
			break;
		case 2 : 
			// subtraction
			cout << "Enter first number: " << endl;
			cin >> num1;

			cout << "Enter second number: " << endl;
			cin >> num2;

			result = num1 - num2;
			cout << "The result is " << result << '.' << endl;
			break;
		case 3 :
			// multiplication
			cout << "Enter first number: " << endl;
			cin >> num1;

			cout << "Enter second number: " << endl;
			cin >> num2;

			result = num1 * num2;
			cout << "The result is " << result << '.' << endl;
			break;
		case 4 :
			// division
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
			break;
		case 5 : 
			// square
			cout << "Enter a number: " << endl;
			cin >> num1;

			result = pow(num1, 2.0);
			cout << "The result is " << result << '.' << endl; 
			break;
		case 6 : 
			// square root
			cout << "Enter a number: " << endl;
			cin >> num1;

			result = double (sqrt(num1));
			cout << "The result is " << double(result) << '.' << endl;
			break;
		case 7 : 
			// cube
			cout << "Enter a number: " << endl;
			cin >> num1;

			result = pow(num1, 3.0);
			cout << "The result is " << result << '.' << endl;
			break;
		case 8 : 
			// cube root 
			cout << "Enter a number: " << endl;
			cin >> num1;

			result = pow(num1, 1/3);
			cout << "The result is " << result << '.' << endl;
			break;
		case 9 :
			//power
			cout << "Enter first number: " << endl;
			cin >> num1;

			cout << "Enter second number: " << endl;
			cin >> num2;

			result = pow(num1, num2);
			cout << "The result is " << result << '.' << endl;
			break;
		default:    
			cout << "Invalid choice." << endl;
	}

	return 0;
	
}
 
