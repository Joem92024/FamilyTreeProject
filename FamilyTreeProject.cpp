// FamilyTreeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Family.h"
#include "FamilyTree.h"


int main()
{
	auto famTree = new FamilyTree();
	auto dad = new Person("Mike", "Brady", Sex::male, true);
	auto mom = new Person("Carol", "Brady", Sex::female, true);
	auto fam = new Family(dad, mom);
	auto child1 = new Person("Marsha", "Brady", Sex::female, true);
	fam->AddChild(child1);
	famTree->AddFamily(fam);

	//delete me;
}

