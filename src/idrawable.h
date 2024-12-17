#pragma once
#include "igraphics.h"

/**
 * \brief Drawable interface
 */
struct IDrawable
{
	virtual ~IDrawable() = default;
	virtual void draw(IGraphics* graphics) = 0;
};