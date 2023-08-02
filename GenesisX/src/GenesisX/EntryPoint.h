extern GenesisX::Application *GenesisX::CreateApplication();

int main(int argc, char **argv)
{
    auto app = GenesisX::CreateApplication();
    app->Run();
    delete app;
}