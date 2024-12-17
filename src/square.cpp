#include "square.h"
#include <sstream>
#include <cassert>
using namespace std;

Square::Square(int x0, int y0, int x1, int y1) : ShapeBase(ShapeID::SQUARE),
	m_x0(x0), m_y0(y0), m_x1(x1), m_y1(y1)
{}

void Square::draw(IGraphics* graphics)
{
	graphics->drawLine(m_x0, m_y0, m_x1, m_y0);
	graphics->drawLine(m_x0, m_y1, m_x1, m_y1);
	graphics->drawLine(m_x0, m_y0, m_x0, m_y1);
	graphics->drawLine(m_x1, m_y0, m_x1, m_y1);
}

string Square::serialize()
{ // TODO add FileSerializer/FileDeserializer?
	return ShapeBase::serialize() + "," + to_string(m_x0) + "," + to_string(m_y0) +
		"," + to_string(m_x1) + "," + to_string(m_y1);
}

std::unique_ptr<Square> Square::fromString(const std::string& s)
{
	istringstream is(s);
	string token;
	try {
		getline(is, token, ',');
		int x0 = stoi(token);
		getline(is, token, ',');
		int y0 = stoi(token);
		getline(is, token, ',');
		int x1 = stoi(token);
		getline(is, token, ',');
		int y1 = stoi(token);

		return make_unique<Square>(x0, y0, x1, y1);
	}
	catch (...) {
		assert(false);
	}
	return {};
}