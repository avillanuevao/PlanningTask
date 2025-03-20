#pragma once

#include <string>

namespace controller {
namespace operation {

class IAddTask
{
public:
    IAddTask() = default;

    virtual void addTask(std::string nameTask) = 0;
};

} // namespace operation
} // namespace controller
