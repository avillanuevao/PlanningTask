#include "Tasks.hpp"

#include <model/Task.hpp>

namespace model {

Tasks::Tasks() {}

void Tasks::addTask(std::string nameTask)
{
    bool isNewTask = !mTasks.count(nameTask);

    if (isNewTask)
    {
        std::shared_ptr<model::ITask> newTask = std::make_shared<model::Task>(nameTask);
        mTasks[nameTask] = newTask;
    }
}

std::shared_ptr<ITask> Tasks::getTask(std::string nameTask)
{
    return mTasks[nameTask];
}


} // namespace model
