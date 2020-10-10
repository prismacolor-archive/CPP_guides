# include <iostream>
#include <stdint.h>
# include <list>
using namespace std;

// OOP: lets you represent real life objects with their attributes and behaviors
// consists of classes (a template) and objects (instances of a class), ex: Fruit, then apple
// user defined data type
// attributes are defined as variables, also has methods (class functions)

class Book {
// declare as public so you can use it in the main code, rather than just in the code itself
public:
	string Name;
	string Author;
	int NumberOfPages;
	list<string> Publishers;
};


// class with constructor, note attributes should be defined before being assigned
class Dragon {
public:
	string Name;
	int Age;
	list<string> PreferredFood;

	Dragon(string name, int age) {
		Name = name;
		Age = age;
	};

	void GetInfo() {
		cout << "Name: " << Name << endl;
		cout << "Age: " << Age << endl;
		cout << "Preferred Foods: " << endl;
		for (string food : PreferredFood) {
			cout << food << endl;
		};
		cout << endl;
	};
};


// now looking at inheritance, first we create a base class
class Planet {
private: 
	// private attributes can only be accessed within this class
	string Color;
	string Type;
	long DistanceFromSun;
	list<string> Moons;
	
protected:
	// protected allows you to access these attributes in derived classes but keep them from being directly edited
	string Name;
	int NumOfMoons;

public:
	Planet(string name, string color, string type) {
		Name = name;
		Color = color;
		Type = type;
	};
	void GetStats() {
		cout << "Name: " << Name << endl;
		cout << "Color: " << Color << endl;
		cout << "Type: " << Type << endl;
		cout << "Distance from Sun: " << DistanceFromSun << endl;
		cout << endl;
	};

	void AddDistance(int64_t miles) {
		DistanceFromSun = miles;
	};

	void GetMoons() {
		cout << "Number of Moons: " << NumOfMoons << endl;
		cout << "Moons: " << endl;
		for (string moon : Moons) {
			cout << moon << endl;
		};
		cout << endl;
	};

	void NewMoon(string moon) {
		Moons.push_back(moon);
		NumOfMoons++;
	};

	void PlanetIntro(string random) {
		cout << random << endl;
	};

	void PlanetGreeting() {
		cout << "Hi, I'm " << Name << " and I'm an awesome planet!" << endl;
	};
};


// this inherits from planet, the public keyword ensures that it inherits all public attributes and methods from the parent/base class
// this is the derived class
class DwarfPlanet : public Planet {
public:
	// i still need a constructor for my derived class
	DwarfPlanet(string name, string color, string type): Planet(name, color, type) {

	}

	void PlanetIntro() {
		cout << Name << " is a tiny dwarf planet. It is small but mighty!" << endl;
		cout << endl;
	};
};


class ExoPlanet : public Planet {
public:
	// i still need a constructor for my derived class
	ExoPlanet(string name, string color, string type) : Planet(name, color, type) {

	}

	void PlanetIntro() {
		cout << Name << " does not live in the solar system. It is far far away." << endl;
		cout << endl;
	};
};

int main()
{
	// basic object creation
	Book whiteFang;
	whiteFang.Name = "White Fang";
	whiteFang.Author = "Jack London";
	whiteFang.NumberOfPages = 112;
	whiteFang.Publishers = { "Random House", "Penguin", "Pete's Publishing" };

	cout << "Name: " << whiteFang.Name << endl;
	cout << "Author: " << whiteFang.Author << endl;
	cout << "Number of Pages: " << whiteFang.NumberOfPages << endl;
	cout << "Published by: " << endl;

	// to display all items in a list you must loop through the list
	// you should note you cannot just cout << a list, you need to loop through the list and print out individual items
	for (string publishedBy : whiteFang.Publishers) {
		cout << publishedBy << endl;
	}

	cout << endl;

	// Now let's talk about constructors and class methods
	// the prior method is cool, but it goes against DRY (don't repeat yourself!) We don't want to copy this code over and over
	// time for a constructor, a method that's invoked every time you call an instance of a certain class
	// constructor must have the same name as your class, and does not have a return type
	Dragon  vermithrax("Vermithrax", 232);
	Dragon smaug("Smaug", 473);

	// use the .push_back method to add things to the end of your list
	smaug.PreferredFood.push_back("Dwarves");
	smaug.PreferredFood.push_back("Goats");
	smaug.PreferredFood.push_back("Townspeople");

	vermithrax.PreferredFood.push_back("Maidens");
	vermithrax.PreferredFood.push_back("Horses");
	vermithrax.PreferredFood.push_back("Birds");

	// comment out large blocks of code in Visual Studio by doing ctrl + c + k
	/*cout << "Name: " << smaug.Name << endl;
	cout << "Age: " << smaug.Age << endl;
	cout << "Preferred Foods: " << endl;
	for (string food : smaug.PreferredFood) {
		cout << food << endl;
	};*/

	smaug.GetInfo();
	vermithrax.GetInfo();

	// Wonderful! Now, let's talk about inheritance! The idea of parent classes and child classes which inherit from the parent. 
	// first planet is a derived class from Planet, second is from the base Planet class
	DwarfPlanet pluto("Pluto", "Grey", "Dwarf");
	pluto.AddDistance(3670000000);
	pluto.GetStats();
	pluto.PlanetIntro();

	Planet jupiter("Jupiter", "Orange", "Gas Giant");
	jupiter.AddDistance(483770000);
	jupiter.GetStats();

	// let's talk about polymorphism, where two objects can inherit from a base class
	// polymorphism is where the derived classes can inherit or have a method with the same name, but it does different things for each subclass
	// points will come up later, but they factor into polymorphism, you create pointers to the base class
	DwarfPlanet riley("Riley", "Blue", "Imaginary");
	riley.PlanetIntro();

	ExoPlanet orbitar("Orbitar", "Unknown", "Exoplanet");
	orbitar.PlanetIntro();

	// create pointers to the base classes and then you can invoke inherited method with the same name on them
	Planet* riley2 = &riley;
	Planet* orbitar2 = &orbitar;

	riley2->PlanetGreeting();
	orbitar2->PlanetGreeting();


	// now, we'll talk about encapsulation: properties within your classes should be private, and you give access to them using methods
	// user can change the attributes using the methods rather than changing them directly, which can produce bad results
	// rather than letting user do someplanet.AddDisance = 4256685465685, we ask them to pass a number as an argument and that will allow us to change the attribute within the class

	// in Planet parent class, we ask users to add moon to a list but do not let them create the list from scratch themselves
	// also the only way they can edit the NumOfMoons variable is to add a moon through our method NewMoon()
	riley.NewMoon("Parcelus");
	riley.GetMoons();

	// you can use getter and setter methods to change and set your attributes, so private attributes, accessed through public methods


	system("pause>0");
}