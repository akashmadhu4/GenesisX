#include "Window.h"

namespace GenesisX
{

    class Application
    {
    private:
    public:
        Application();
        virtual ~Application();
        void Run();

    private:
        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };
    Application *CreateApplication();
}
