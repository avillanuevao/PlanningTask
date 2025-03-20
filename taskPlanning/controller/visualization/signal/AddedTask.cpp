#include "AddedTask.hpp"

namespace controller {
namespace visualization {
namespace signal {

AddedTask::AddedTask(std::string nameTask)
    : mNameTask(nameTask)
{}

std::string AddedTask::getNameTask() const
{
    return mNameTask;
}

} // namespace signal
} // namespace visualization
} // namespace controller
