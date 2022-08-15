#include "Person.h"
#include <stdexcept>

/**
 * \brief ctor
 */
Person::Person(): _sex(Sex::male), _living(false)
{
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

string Person::FirstName()
{
	return _firstName;
}

string Person::LastName()
{
	return _lastName;
}

/**
 * \Person dtor
 */
Person::~Person()
{
}

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
