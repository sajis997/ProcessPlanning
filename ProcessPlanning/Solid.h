#pragma once
#include "ComplexGeometry.h"

namespace ProcessPlanning
{

	class Solid :
		public ComplexGeometry
	{
	public:
		Solid(Graphics* imp = NULL);
		~Solid(void);
		virtual void render(void) const;
	};

}
