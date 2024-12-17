#pragma once
#include <memory>
#include <vector>
#include "shapebase.h"
#include "idrawable.h"
#include "iserializable.h"

/**
 * \brief Document class
 * \details Holds shapes
 */
class Document : public IDrawable
{
public:
	void addShape(std::unique_ptr<ShapeBase>&& shape);
	void draw(IGraphics* graphics) override;

protected:
	std::vector<std::unique_ptr<ShapeBase>> m_shapes;
};