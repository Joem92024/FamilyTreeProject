#include "Family.h"


Family::Family(Person* parent1, Person* parent2): _parent1(parent1), _parent2(parent2)
{
}

void Family::AddChild(Person* child)
{
	if(_parent1 == nullptr)
	{
		// error message that first parent is required. 
		return;
	}
	child->AddParents(_parent1, _parent2);
	_children.push_back(child);
}

Family::~Family()
{
	
}
