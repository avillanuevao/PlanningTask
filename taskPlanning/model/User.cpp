#include "User.hpp"

namespace model {

User::User(std::string name)
    : mName(name)
{}

void User::assignTask(std::string nameTask, std::shared_ptr<ITask> task)
{
    mTasks[nameTask] = task;
}

} // namespace model
