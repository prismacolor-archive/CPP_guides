// recall that this is how you import libraries 
#include <iostream>
// now you don't have to declare the namespace before every command
using namespace std;

int main()
{
	// you cannot put two different data types in one variable and you cannot change the data type of a variable after you make it
	// you can make floats (decimal)
	float mySalary0 = 62500.50;
	float monthlySalary0 = mySalary0 / 12;

	// you have created an empty float variable with the name someSalary, don't forget to assign something to it later
	float someSalary;

	// add some instructions for your user
	cout << "Please enter your annual salary: ";

	// take the input of your user and return a response
	cin >> someSalary;
	float monthlySalary = someSalary / 12;

	// when adding strings and numbers to print, you should do "I make " >> number 
	cout << monthlySalary << endl;
	cout << "In ten years, you will have earned " << someSalary * 10 << endl;

	// make a character variable, note the single quotes! Vs double quotes for strings
	// name variables according to the purpose, nothing basic
	// you can't have special signs in your variable names but you can use underscores
	// variables cannot begin with numbers and cannot contain spaces
	// utilize camelCasing when naming your variables
	char character = 'a';

	// Let's talk about data types!
	// integers = neg numbers, pos numbers, 0 (int)
	int yearOfBirth = 1987;
	// decimal or floating point number
	float averageRainfall = 20.6;
	// double, similar to float but it takes 8 bytes whereas floats only have 4, good for large numbers
	double balance = 1586242563;
	// char holds one single text item
	char gender = 'f';
	// boolean or bool, true or false
	bool isOlderThan18 = true;

	// sizeof will tell you the number of bytes your variable using
	cout << "Size of int is " << sizeof(int) << "bytes\n";
	cout << "Int min value is " << INT_MIN << endl; // this will tell you the minimum number that can be accessed
	cout << "Int max value is " << INT_MAX << endl; // this will give you the maximum number that can be accessed, same as min but positive and minus one because 0 is counted

	// unsigned int for when you only want positive numbers, lets program use the full 32 bits available to make numbers
	cout << "Size of unsigned int is " << sizeof(unsigned int) << "bytes\n"; // use UINT_MAX and UINT_MIN to get the max and min

	// other data types included signed int (negative numbers), signed and unsigned characters
	// short int, signed and unsigned short ent, limits decimals to three places
	// long int and signed and unsigned long ent, for very large numbers

	// avoid data overflow
	int intMax = INT_MAX;
	cout << intMax << endl;
	// if you tried to print the result of this variable plus 1, you have overloaded the variable
	// instead of printing the result, the variable will simple recycle to the smallest/min (just like a clock goes to 1 once it has reached 12

	// don't forget to use this to erase the debugging junk text at the end of your program
	system("pause>0");
}