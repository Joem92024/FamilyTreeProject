#pragma once
#include <string>
#include <vector>
#include "Person.h"

using namespace std;

struct FamilyParents {             // Structure for parents
	Person* parent1;
	Person* parent2;
};

class Family
{
private:

	vector<Person*> _children; // all the children in the family
	Person* _parent1;
	Person* _parent2;
	string _surname;

	
public:
	Family(Person* parent1, Person* parent2);

	void AddChild(Person* child);
	FamilyParents GetParents();
	vector<Person*> GetChildren();

	~Family();
};

