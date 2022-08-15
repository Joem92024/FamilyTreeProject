#pragma once
#pragma once
#include <string>
#include <vector>
using namespace std;
#include "Person.h"


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

	
	~Family();
};

