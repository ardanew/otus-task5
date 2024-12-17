#include "document.h"

void Document::addShape(std::unique_ptr<ShapeBase>&& shape)
{
	m_shapes.push_back(std::move(shape));
}

void Document::draw(IGraphics* graphics)
{
	for (auto& shape : m_shapes)
		shape->draw(graphics);
}