#include "shapebase.h"
#include <cassert>

ShapeBase::ShapeBase(ShapeID id) : m_id(id) {}

std::string ShapeBase::serialize()
{
	return ShapeIdHelpers::toString(m_id);
}