#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include "Application.h"
#include <Events/ApplicationEvent.h>
#include <GLFW/glfw3.h>

#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)
namespace GenesisX
{

    Application::Application()
    {

        m_Window = std::unique_ptr<Window>(Window::Create());
        m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));
    }

    Application::~Application()
    {
    }
    void Application::OnEvent(Event &e)
    {
        GZ_CORE_INFO("{0}", e);
    }
    void Application::Run()
    {

        while (m_Running)
        {
            glClearColor(1, 0, 1, 1);
            glClear(GL_COLOR_BUFFER_BIT);
            m_Window->OnUpdate();
        }
    }

}
