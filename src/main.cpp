// main.cpp — entry point. Wires config and subsystems together.

#include "freevpnunlimited/settings.h"
#include "freevpnunlimited/tunnel.h"
#include "freevpnunlimited/profiles.h"
#include "freevpnunlimited/watchdog.h"
#include "freevpnunlimited/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    freevpnunlimited::Settings settings = freevpnunlimited::Settings::load_default();
    freevpnunlimited::Tunnel tunnel(settings.store_path);
    freevpnunlimited::Profiles profiles(settings.store_path);
    freevpnunlimited::Watchdog watchdog(settings.store_path);
    freevpnunlimited::Cli cli(settings.store_path);
    std::fprintf(stderr, "[free-vpn-unlimited] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
