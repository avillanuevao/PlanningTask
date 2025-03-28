#pragma once

#include <string>

namespace controller {
namespace operation {

class ISelectTask
{
public:
    ISelectTask() = default;

    virtual void selectTask(std::string nameTask) = 0;
};

} // namespace operation
} // namespace controller
