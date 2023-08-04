#include "Application.h"
#include <Events/ApplicationEvent.h>
#include <Log.h>

namespace GenesisX
{

    Application::Application()
    {
    }

    Application::~Application()
    {
    }

    void Application::Run()
    {
        printf("Welcome to GenesisX Game Engine\n");
        WindowResizeEvent e(1280, 720);
        if (e.IsInCategory(EventCategoryApplication))
        {
            GZ_TRACE(e);
        }
        if (e.IsInCategory(EventCategoryInput))
        {
            GZ_TRACE(e);
        }
        while (true)
            ;
    }

}
