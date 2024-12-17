#include "controller.h"

void Controller::setModel(Model* model) { m_model = model; }

void Controller::createNewDocument() { m_model->createNewDocument(); }

void Controller::importDocument(const std::string& fileName) { m_model->importDocument(fileName); }

void Controller::exportDocument(const std::string& fileName) { m_model->exportDocument(fileName); }

void Controller::createSquare(int x0, int y0, int x1, int y1) { m_model->createSquare(x0, y0, x1, y1); }

void Controller::deleteShapeAtPosition(int x, int y) { m_model->deleteShapeAtPosition(x, y); }

void Controller::requestUpdate() { m_model->requestUpdate(); }