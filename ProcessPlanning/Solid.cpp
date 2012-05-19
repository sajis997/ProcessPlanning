#include "Solid.h"

namespace ProcessPlanning
{

	Solid::Solid(Graphics* imp)
		: ComplexGeometry(imp)
	{
	}


	Solid::~Solid(void)
	{
	}

	void Solid::render(void) const
	{
		ifImp->render(this);
	}

}