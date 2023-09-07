#include <stdio.h>
#include "GenesisX.h"

class ExampleLayer : public GenesisX::Layer
{
public:
    ExampleLayer()
        : Layer("Example") {}
    void OnUpdate() override
    {
        GZ_INFO("ExampleLayer::Update");
    }
    void OnEvent(GenesisX::Event &event) override
    {
        GZ_TRACE("{0}", event);
    }
};

class Sandbox : public GenesisX::Application
{
public:
    Sandbox()
    {
        PushLayer(new ExampleLayer());
    }
    ~Sandbox()
    {
    }
};

GenesisX::Application *GenesisX::CreateApplication()
{
    return new Sandbox();
}