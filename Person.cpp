#include "Person.h"

/**
 * \brief ctor
 */
Person::Person(): _sex(Sex::male), _living(false)
{
}

void Person::AddParents(Person* parent1, Person* parent2)
{
	_parent1 = parent1;
	_parent2 = parent2;

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
