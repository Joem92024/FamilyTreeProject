// FamilyTreeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Family.h"
#include "FamilyTree.h"


int main()
{
	auto famTree = new FamilyTree();
	// create the family members
	auto joe = new Person("Joseph", "Kennedy", Sex::male, false);
	auto rose = new Person("Rose", "Kennedy", Sex::female, false);

	auto robert = new Person("Robert", "Kennedy", Sex::male, false);
	auto jfk = new Person("John F.", "Kennedy", Sex::male, false);
	auto ethel = new Person("Ethel", "Skakel", Sex::female, false);
	auto robertf = new Person("Robert Francis", "Kennedy", Sex::male, true);

	auto david = new Person("David", "Kennedy", Sex::male, true);
	auto joePatrick = new Person("Joseph Patrick.", "Kennedy", Sex::male, true);
	auto shiela = new Person("Shelia", "Rauch", Sex::female, false);

	auto joe3 = new Person("Joseph III", "Kennedy", Sex::male, true);
	auto matt = new Person("Mathew", "Kennedy", Sex::male, true);
	
	// create the families and add children
	auto kennedysrFam = new Family(joe, rose);
	kennedysrFam->AddChild(robert);
	kennedysrFam->AddChild(jfk);


	auto bobbyFam = new Family(robert, ethel);
	bobbyFam->AddChild(joePatrick);
	bobbyFam->AddChild(robertf);
	bobbyFam->AddChild(david);

	auto joePatFam = new Family(joePatrick, shiela);
	joePatFam->AddChild(joe3);
	joePatFam->AddChild(matt);

	// add families to family tree
	famTree->AddFamily(kennedysrFam);
	famTree->AddFamily(bobbyFam);
	famTree->AddFamily(joePatFam);

	//  Check for uncle of joe3

	// Get the families for joe3 parents 
	Person* per1 = joe3->GetParent1();
	Person* per2 = joe3->GetParent2();

	bool hasUncle = false;

	// get collection of families in the tree
	auto families = famTree->GetFamilies();

	std::vector<Family*>::iterator iterFamily, endf;
	std::vector<Person*>::iterator iterPerson, endp;
	// iterate the families and find a family that has the one of joe3 parents as a child. - these are aunt and uncles.
	iterFamily = families.begin();
	endf = families.end();
	while(!hasUncle && iterFamily != endf)
	{
		// are the parents children in the family?
		auto children = (*iterFamily)->GetChildren();
		bool hasp1 = std::find(children.begin(), children.end(), per1) != children.end();
		bool hasp2 = std::find(children.begin(), children.end(), per2) != children.end();

		if (hasp1 || hasp2)
		{
			// parents ar children in the family
			for (iterPerson = children.begin(), endp = children.end(); iterPerson != endp; ++iterPerson)
			{
				// the sibling should not be the parent of course
				if ((*iterPerson) != per1 && (*iterPerson) != per2)
				{
					// if there is a male sibling on in the family children it is an uncle.
					if ((*iterPerson)->GetSex() == Sex::male)
					{
						hasUncle = true;
						break;
					}
				}
			}
		}
		++iterFamily;
	}

}

