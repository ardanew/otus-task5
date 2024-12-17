#pragma once
#include <string>
#include <memory>
#include "iview.h"
#include "document.h"

/**
 * \brief Model class
 * \details Holds business logic. Updates view
 */
class Model
{
public:
	void setView(IView* view);

	void createNewDocument();
	void importDocument(const std::string& fileName);
	void exportDocument(const std::string& fileName);
	void createSquare(int x0, int y0, int x1, int y1);
	void deleteShapeAtPosition(int x, int y);
	void requestUpdate();

protected:
	IView* m_view = nullptr;
	std::unique_ptr<Document> m_document;
};
