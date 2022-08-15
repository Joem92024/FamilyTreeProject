#pragma once
#include <stdexcept>
using namespace std;
#include "Family.h"
#include "FamilyTree.h"

FamilyTree::FamilyTree()
= default;

void FamilyTree::AddFamily(Family* family)
{
	if (family == nullptr)
	{
		throw invalid_argument("add family has null value");
	}
	_families.push_back(family);
}
