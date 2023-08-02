
namespace GenesisX
{

    class Application
    {
    private:
    public:
        Application();
        virtual ~Application();
        void Run();
    };
    Application *CreateApplication();
}
