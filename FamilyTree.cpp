#pragma once
#include <stdexcept>
using namespace std;
#include "Family.h"
#include "FamilyTree.h"

FamilyTree::FamilyTree()
= default;

/**
 * \brief Add a family to the tree
 * \param family 'family'
 */
void FamilyTree::AddFamily(Family* family)
{
	if (family == nullptr)
	{
		throw invalid_argument("add family has null value");
	}
	_families.push_back(family);
}

/**
 * \brief Get the collection of families
 * \return 'family collection'
 */
vector<Family*> FamilyTree::GetFamilies()
{
	return _families;
}

/**
 * \brief dtor
 */
FamilyTree::~FamilyTree()
{
	_families.clear();
}
