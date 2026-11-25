// watchdog.cpp — part of free-vpn-unlimited.

#include "freevpnunlimited/watchdog.h"

#include <cstdio>

namespace freevpnunlimited {

Watchdog::Watchdog(const std::string& config_path)
    : config_path_(config_path) {}

void Watchdog::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Watchdog::run() {
    if (verbose_) std::fprintf(stderr, "[free-vpn-unlimited] watchdog: run\n");
    // core logic lives here
    return true;
}

}  // namespace freevpnunlimited
