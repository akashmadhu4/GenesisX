#include "pch.h"
#include "Window.h"
#include "LayerStack.h"
#include "Events/ApplicationEvent.h"

namespace GenesisX
{

    class Application
    {
    private:
    public:
        Application();
        virtual ~Application();
        void Run();
        void OnEvent(Event &e);
        bool OnWindowClose(WindowCloseEvent &e);
        void PushLayer(Layer *layer);
        void PushOverlay(Layer *layer);

    private:
        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
        LayerStack m_LayerStack;
    };
    Application *CreateApplication();
}
