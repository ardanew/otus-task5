#include "shapeid.h"
#include <cassert>

std::string ShapeIdHelpers::toString(ShapeID id)
{
	switch (id)
	{
	case ShapeID::SQUARE:
		return "square,";
	default:
		assert(false);
		return "";
	}
}

ShapeID ShapeIdHelpers::toId(const std::string& v)
{
	if (v == ShapeStr::SQUARE)
		return ShapeID::SQUARE;

	assert(false);
	return ShapeID::UNKNOWN;
}