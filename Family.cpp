#include "Family.h"
#include "Person.h"
#include <iostream>

/**
 * \brief ctor
 * \param parent1 'parent1' Assumes surname of parent1
 * \param parent2 'parent1' 
 */
Family::Family(Person* parent1, Person* parent2)
{
	if (parent1 == nullptr || parent2 == nullptr)
	{
		cout << "Family has null parent:" << endl;
		return;
	}
	_surname = parent1->LastName();
	_parent1 = parent1;
	_parent2 = parent2;
	FamilyParents _parents{ parent1,parent2 };

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

/**
 * \brief Get the parents for the person
 * \return 'set of parents'
 */
FamilyParents Family::GetParents()
{
	FamilyParents parents = {_parent1, _parent2};
	return parents;
}

/**
 * \brief Get the collection of children
 * \return 'children collection'
 */
vector<Person*> Family::GetChildren()
{
	return _children;
}

/**
 * \brief dtor
 */
Family::~Family()
{
	_children.clear();
}

