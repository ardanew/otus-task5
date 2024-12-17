#pragma once
#include "shapebase.h"

struct IGraphics
{
	virtual ~IGraphics() = default;
	virtual void drawLine(int x0, int y0, int x1, int y1) = 0;
};