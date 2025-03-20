#pragma once

#include <string>

namespace controller {
namespace visualization {
namespace signal {

class AddedTask
{
public:
    AddedTask(std::string nameTask);

    std::string getNameTask() const;

private:
    std::string mNameTask;
};

} // namespace signal
} // namespace visualization
} // namespace controller
