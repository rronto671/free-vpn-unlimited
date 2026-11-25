// watchdog — part of free-vpn-unlimited.

#pragma once

#include <string>
#include <vector>

namespace freevpnunlimited {

class Watchdog {
public:
    explicit Watchdog(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace freevpnunlimited
