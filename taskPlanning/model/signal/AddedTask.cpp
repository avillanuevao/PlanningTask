#include "AddedTask.hpp"

namespace model {
namespace signal {

AddedTask::AddedTask(std::string nameTask)
    : mNameTask(nameTask)
{}

std::string AddedTask::getNameTask() const
{
    return mNameTask;
}

} // namespace signal
} // namespace model
