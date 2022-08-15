#include "Family.h"

#include <iostream>

/**
 * \brief ctor
 * \param parent1 'parent1' Assumes surname of parent1
 * \param parent2 'parent1' 
 */
Family::Family(Person* parent1, Person* parent2)
{
	if (parent1 == nullptr)
	{
		cout << "Family has null parent:" << endl;
		return;
	}
	_surname = parent1->LastName();
	_parent1 = parent1;
	_parent2 = parent2;
}

/**
 * \brief Add a child
 * \param child 'child' child to add 
 */
void Family::AddChild(Person* child)
{
	child->AddParents(_parent1, _parent2);
	_children.push_back(child);
}

Family::~Family()
= default;
