#include <iostream>
using namespace std;

int maintwo()
{
	// you cannot put two different data types in one variable and you cannot change the data type of a variable when you make it
	// you can make floats (decimal), these can hold up to 8 bytes
	float mySalary = 62500.50;
	float monthlySalary = mySalary / 12;
	// when adding strings and numbers to print, you should do "I make " << number 
	// use \n or << endl at the end of your outputs to create new lines
	cout << monthlySalary;

	// integers are whole negative or positive numbers, they can only hold 4 bytes, usu. 10 digits
	int nyema = 42;

	char str[] = "bananarama"; // C++ does not have traditional strings but string arrays

	// arrays in C++ hold a fized size sequenced collection of elements of the same type
	// cannot mix data types
	// syntax is type arrayName [array size];
	float expenses[] = { 5, 6.00, 7.50, 8.92 };

	// if you do not specify size of array it will only be as large as the numbers you enter
	// you can assign values to different indexes in your array
	// you can assign values in arrays to other variables
	expenses[4] = 9.42;
	float someNumber = expenses[3];

	//can make an empty array as well
	int n[10]; // this makes an empty 10 element array
	
	// don't forget to use this to erase the debugging junk text at the end of your program
	system("pause>0");
}