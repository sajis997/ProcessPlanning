#pragma once
#include "stdafx.h"
#include "SimpleGeometry.h"
#include "Graphics.h"

namespace ProcessPlanning 
{
	class Point : public SimpleGeometry
	{
	public:
		Point(const float x=0.0, const float y=0.0, const float z=0.0);
		~Point();
        bool operator==(const Point &p) const;
        bool operator!=(const Point &p) const;
        bool operator<(const Point &p) const;
        bool operator>(const Point &p) const;

		virtual void render(void);
	};
}
