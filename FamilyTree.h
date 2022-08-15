#pragma once
#include <vector>
#include "Person.h"
#include "Family.h"
using namespace std;

class FamilyTree
{
private:
	vector<Family*> _families; // all the families in the tree
public:
	FamilyTree();
	void AddFamily(Family* family);
};

