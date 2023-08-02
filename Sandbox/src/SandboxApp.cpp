#include <stdio.h>
#include "GenesisX.h"

class Sandbox : public GenesisX::Application
{
public:
    Sandbox()
    {
    }
    ~Sandbox()
    {
    }
};

GenesisX::Application *GenesisX::CreateApplication()
{
    return new Sandbox();
}