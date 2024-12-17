#pragma once
#include "igraphics.h"
#include "idrawable.h"
#include "iserializable.h"
#include "shapeid.h"

/**
 * \brief Shape base class
 * \details Holds shape id
 */
class ShapeBase: public IDrawable, public ISerializable
{
public:
	ShapeBase(ShapeID id);
	virtual ~ShapeBase() = default;
	std::string serialize() override;
	ShapeID m_id;
};