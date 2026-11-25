// profiles.cpp — part of free-vpn-unlimited.

#include "freevpnunlimited/profiles.h"

#include <cstdio>

namespace freevpnunlimited {

Profiles::Profiles(const std::string& config_path)
    : config_path_(config_path) {}

void Profiles::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Profiles::run() {
    if (verbose_) std::fprintf(stderr, "[free-vpn-unlimited] profiles: run\n");
    // core logic lives here
    return true;
}

}  // namespace freevpnunlimited
