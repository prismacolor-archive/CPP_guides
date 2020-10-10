// this is an import statement, the item in bracket is the library you're importing
#include <iostream>
// this puts the std on the global level so you don't have to write it before every command
using namespace std;

// this is the main function you use to execute the program
// std references the namespace your computer uses when it compiles and reads the program
// cout stands for console output, it's basically your console.log or print statement
// each line must end in semicolon or you will get a compile error
int main()
{
	// \n denotes a newline, you can also create new lines by putting std::endl at the end of a line
	cout << "Hello, World!\n";
	cout << "I like strings.\n";
	std::cout << "Have you heard of string theory?\n";
	system("pause>0");
}

// the last command of that function removes the default warning text that comes when you run your program
// if you have errors they will appear in the bottom of this window

// in Windows you can run your program outside of VS, save using control + S 
// locate the folder where you saved the project, go to debug, and find the application file. Right click on .exe and you can run the program
// mine are currently located in user files under source