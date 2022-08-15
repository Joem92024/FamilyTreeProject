// FamilyTreeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"


int main()
{
	auto me = new Person("Joe", "Michniewicz", Sex::male, true);
	auto me2 = new Person("first", "lst", Sex::female, true);


	//delete me;
}

