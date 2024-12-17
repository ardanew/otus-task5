#pragma once
#include <string>
#include <cassert>

enum class ShapeID
{
	UNKNOWN,
	SQUARE
};

struct ShapeStr
{
	static inline std::string SQUARE = "square";
};

struct ShapeIdHelpers
{
	static std::string toString(ShapeID id);
	static ShapeID toId(const std::string& v);
};
