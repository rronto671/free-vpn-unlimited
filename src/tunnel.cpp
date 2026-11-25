// tunnel.cpp — part of free-vpn-unlimited.

#include "freevpnunlimited/tunnel.h"

#include <cstdio>

namespace freevpnunlimited {

Tunnel::Tunnel(const std::string& config_path)
    : config_path_(config_path) {}

void Tunnel::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tunnel::run() {
    if (verbose_) std::fprintf(stderr, "[free-vpn-unlimited] tunnel: run\n");
    // core logic lives here
    return true;
}

}  // namespace freevpnunlimited
