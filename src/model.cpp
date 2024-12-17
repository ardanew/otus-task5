#include "model.h"
#include <cassert>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <iostream>
#include "square.h"
namespace fs = std::filesystem;

void Model::setView(IView* view) { m_view = view; }

/**
 * \brief Creates new document
 * \details Old one is discarded
 */
void Model::createNewDocument() 
{
	std::cout << "Model: create new document" << std::endl;
	m_document = std::make_unique<Document>();
}

/**
 * \brief Imports a file
 * \details Mocked for simplicity
 */
void Model::importDocument(const std::string& fileName) 
{
	createNewDocument();
	std::cout << "Model: import document" << std::endl;
// 	try {
// 		std::ifstream f(fileName);
// 		std::string s;
// 		std::string token;
// 		while (std::getline(f, s) )
// 		{
// 			std::istringstream ss(s);
// 			std::getline(ss, token, ',');
// 			switch (ShapeIdHelpers::toId(token))
// 			{
// 			case ShapeID::SQUARE:
// 			{
// 				std::getline(ss, token);
// 				auto square = Square::fromString(token);
// 				m_document->addShape(std::move(square));
// 			}
// 			break;
// 			default:
// 				assert(false);
// 			}
// 		}
// 	}
// 	catch (...)	{ assert(false); }
}

/**
 * \brief Exports document to a file
 * \details Mocked for simplicity. No deserialize functions implemented for now
 */
void Model::exportDocument(const std::string& fileName) { std::cout << "Model/export document" << std::endl; }

/**
 * \brief Create square shape
 */
void Model::createSquare(int x0, int y0, int x1, int y1) 
{ 
	auto square = std::make_unique<Square>(x0, y0, x1, y1);
	m_document->addShape(std::move(square));
}

/**
 * \brief Delete shape at specified position
 * \details Mocked for simplicity
 */
void Model::deleteShapeAtPosition(int x, int y) { std::cout << "Model/delete shape at position" << std::endl; }

/**
 * \brief Updates view to display current document
 */
void Model::requestUpdate()
{
	m_view->update(m_document.get());
}