#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace GenesisX
{
    class Log
    {

    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger> &GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger> &GetClientLogger() { return s_ClientLogger; }

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
}

// Core log macros
#define GZ_CORE_TRACE(...) ::GenesisX::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GZ_CORE_INFO(...) ::GenesisX::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GZ_CORE_WARN(...) ::GenesisX::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GZ_CORE_ERROR(...) ::GenesisX::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GZ_CORE_FATAL(...) ::GenesisX::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define GZ_TRACE(...) ::GenesisX::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GZ_INFO(...) ::GenesisX::Log::GetClientLogger()->info(__VA_ARGS__)
#define GZ_WARN(...) ::GenesisX::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GZ_ERROR(...) ::GenesisX::Log::GetClientLogger()->error(__VA_ARGS__)
#define GZ_FATAL(...) ::GenesisX::Log::GetClientLogger()->fatal(__VA_ARGS__)