#pragma once

#include <string>

namespace model {

class ITask
{
public:
    ITask() = default;

    virtual std::string getName() const = 0;
};

} // namespace model

