#pragma once
#pragma once
#include <string>
#include <vector>
using namespace std;
#include "Person.h"


class Family
{
private:
	/**
	 * \brief all the children in the family
	 */
	vector<Person*> _children;
	Person* _parent1;
	Person* _parent2;

public:
	Family(Person* parent1, Person* parent2);

	void AddChild(Person* child);

	
	~Family();
};

