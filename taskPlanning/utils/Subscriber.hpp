#pragma once

namespace utils {

template<typename T>
class Subscriber
{
public:
    Subscriber() = default;

    virtual void update(const T& data) = 0;
};

} // namespace utils

