// cli.cpp — part of free-vpn-unlimited.

#include "freevpnunlimited/cli.h"

#include <cstdio>

namespace freevpnunlimited {

Cli::Cli(const std::string& config_path)
    : config_path_(config_path) {}

void Cli::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Cli::run() {
    if (verbose_) std::fprintf(stderr, "[free-vpn-unlimited] cli: run\n");
    // core logic lives here
    return true;
}

}  // namespace freevpnunlimited
