#pragma once

namespace controller {
namespace operation {

class IAssignTask
{
public:
    IAssignTask() = default;

    virtual void assignTask() = 0;
};

} // namespace operation
} // namespace controller
