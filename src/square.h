#pragma once
#include "shapebase.h"
#include <memory>

/**
 * \brief Square shape
 */
class Square : public ShapeBase
{
public:
	Square(int x0, int y0, int x1, int y1);
	void draw(IGraphics* graphics) override;
	std::string serialize() override;

	static std::unique_ptr<Square> fromString(const std::string& s);

protected:
	int m_x0;
	int m_y0;
	int m_x1;
	int m_y1;
};