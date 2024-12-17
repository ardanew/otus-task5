#pragma once
#include <string>
#include "model.h"

/**
 * \brief Controller class
 * \details Transfers calls to a model. Can be extended to pass calls via network
 */
class Controller
{
public:
	void setModel(Model* model);
	void createNewDocument();
	void importDocument(const std::string& fileName);
	void exportDocument(const std::string& fileName);
	void createSquare(int x0, int y0, int x1, int y1);
	void deleteShapeAtPosition(int x, int y);
	void requestUpdate();

protected:
	Model* m_model = nullptr;
};