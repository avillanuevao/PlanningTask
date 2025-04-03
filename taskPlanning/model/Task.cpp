#include "Task.hpp"

namespace model {

Task::Task(std::string name)
    : mName(name)
{}

std::string Task::getName() const
{
    return mName;
}

} // namespace model
