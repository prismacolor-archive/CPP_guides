#include <iostream>
using namespace std;

int main()
{
	// ***Let's do an if/else statement***
	int num;

	cout << "Please enter a number.";

	// note you cannot set a variable = to cin or cout statements, cin expects some variable input, cout expects a string
	cin >> num;
	if (num % 2 == 0)
		cout << "it's even\n";
	else
		cout << "it's odd.\n";

	// ***Let's talk about a nested if/else statement***
	//user to enter side lengths of triangle, program should write out types of triangles: equilateral, isoceles, scalene
	float a, b, c;

	cout << "Please list the lengths of the three sides of your triangle with a space between each sides: ";
	cin >> a >> b >> c;

	if (a == b && b == c)
		cout << "This is an equilateral triangle\n";
	else if (a == b || b == c || a == c)
		cout << "This is a isoceles triangle.\n";
	else
		cout << "This is a scalene triangle.\n";

	// ***Now let's make a while loop***
	// user will enter a number and we need to figure out how many digits are in the number
	int number;
	cout << "Please enter a number: ";
	cin >> number;

	// note that if your if or else actions are more than one line, you will need to couch that in curly brackets {}
	if (number == 0)
		cout << "You entered the number 0.\n";
	else {
		int counter = 0;

		//if (number < 0)
		//	number = abs(number);

		while (number != 0) {
			number = number / 10; //we're using whole numbers so the decimal will be removed
			counter ++; // with all operators you can use /=, += and so on to tack something on to that variable
		}

		cout << "Your number has " << counter << " digits\n";// tip, int can only hold numbers with a max of 10 digits, if you put more, it will overload the int variable
	}


	// ***Let's talk about for loops***
	// We will print out a factorial, note the use of exit(1) to break out of the program if user enters invalid numbers, this breaks out of program entirely
	int fact_num;
	int factorial = 1;

	cout << "Please enter a number for factorial calculation: ";
	cin >> fact_num;

	if (fact_num == 0) {
		cout << "The factorial of 0 is 1.\n";
		exit(1);
	}
	else if (fact_num < 0) {
		cout << "You cannot take the factorial of a negative number. \n";
		exit(1);
	}
	else
		for (int i = fact_num; i >= 1; i--) {
			factorial = factorial * i;
		}

		cout << "The factorial is " << factorial << endl;


	// another example
	int honey = 25;

	for (int i = 1; i <= 10; i++) {
		honey = honey + i;
	}

	cout << "This honey costs " << honey << " dollars. Yikes!\n";


	// here is the do while loop, e.g. when you are given three tries to unlock your phone
	// here we do an action, then check the condition vs the traditional while loop where you check the condition first then act
	// this ensures that at least some code is always done even if the condition hasn't been met
	int usersPin = 1234;
	int pin;
	int counter = 0;

	do {
		cout << "Please enter your passcode: ";
		cin >> pin;
		if (pin != usersPin) 
			counter++;
	} while (counter < 3 && pin != usersPin);

	if (counter < 3)
		cout << "Access Granted.";
	else
		cout << "Access Denied.";
	
	system("pause>0");
}