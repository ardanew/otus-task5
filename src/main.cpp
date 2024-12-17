#include <iostream>
#include <memory>
#include "iview.h"
#include "controller.h"
#include "model.h"
#include "igraphics.h"
using namespace std;

/**
 * \brief Screen cout output
 * \details Otus task request - this must be in main.cpp
 */
class CoutGraphics : public IGraphics
{
public:
    virtual void drawLine(int x0, int y0, int x1, int y1) override
    {
        cout << "Line: (" << x0 << " " << y0 << ") -> (" << x1 << " " << y1 << ")" << endl;
    }
};

/**
 * \brief Implements view interface
 * \details Otus task requires this to be in main.cpp. Uses CoutGraphics as output
 */
class View : public IView
{
public:
    View() { m_graphics = make_unique<CoutGraphics>(); }
    void setController(Controller *controller) { m_controller = controller; }
    void update(Document* doc) override
    {
        if (doc == nullptr) return; // could clear the screen here
        doc->draw(m_graphics.get());
    }

protected:
    Controller* m_controller = nullptr;
    unique_ptr<IGraphics> m_graphics;
};

int main()
{
    // must be in builder patter, for simplicity - using main() as builder
    View view;
    Controller controller;
    Model model;
    model.setView(&view);
    view.setController(&controller);
    controller.setModel(&model);

    // run requested tasks
    controller.createNewDocument();
    controller.createSquare(0, 0, 10, 10);
    controller.importDocument("test.it");
    controller.createSquare(10, 10, 20, 20);
    controller.requestUpdate();
    controller.exportDocument("other.it");
    
    return 0;
}
