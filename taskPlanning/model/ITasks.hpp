#pragma once

#include <string>

namespace model {

class ITasks
{
public:
    ITasks() = default;

    virtual void addTask(std::string nameTask) = 0;
};

} // namespace model
