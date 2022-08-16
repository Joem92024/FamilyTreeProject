#include "Person.h"
#include <iostream>
#include <stdexcept>


/**
 * \brief Person ctor
 * \param firstName 'firstName' person first name
 * \param lastname 'lastname' person last name
 * \param sex 'sex' person sex
 * \param living 'living' person is living
 */
Person::Person(const string firstName, const string lastname, const Sex sex, const bool living)
{
	_firstName = firstName;
	_lastName = lastname;
	_sex = sex;
	_living = living;
}


/**
 * \brief AddParents
 * \param parent1 'parent1' first parent - required
 * \param parent2 'parent2' second - optional
 */
void Person::AddParents(Person* parent1, Person* parent2)
{
	if (parent1 == nullptr)
	{
		throw invalid_argument("add parent has null first parent");
	}
	_parent1 = parent1;
	_parent2 = parent2;

}

/**
 * \brief GetFirstName
 * \return 'person first name'
 */
string Person::FirstName()
{
	return _firstName;
}


/**
 * \brief GetLastName
 * \return 'person last name'
 */
string Person::LastName()
{
	return _lastName;
}


/**
 * \brief Get person sex
 * \return 'person sex'
 */
Sex Person::GetSex()
{
	return _sex;
}

/**
 * \brief Get first parent
 * \return 'pointer to first parent'
 */
Person* Person::GetParent1()
{
	return _parent1;
}

/**
 * \brief Get second parent
 * \return 'pointer to second parent'
 */
Person* Person::GetParent2()
{
	return _parent2;
}

/**
 * \Person dtor
 */
Person::~Person()
{
}
