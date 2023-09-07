#include "Log.h"

extern GenesisX::Application *GenesisX::CreateApplication();

int main(int argc, char **argv)
{
    GenesisX::Log::Init();
    GZ_CORE_WARN("Intialized Log!");
    GZ_INFO("Hello!");
    auto app = GenesisX::CreateApplication();
    app->Run();
    delete app;
}