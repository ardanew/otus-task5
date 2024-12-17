#pragma once
#include "document.h"

/**
 * \brief View interface
 * \details Implement this to interact with user
 */
struct IView
{
    virtual ~IView() = default;
    virtual void update(Document* doc) = 0;
};