#include "AddTask.hpp"

namespace controller {
namespace operation {

AddTask::AddTask(std::shared_ptr<model::ITasks> modelTasks)
    : mModelTasks(modelTasks)
{}

void AddTask::addTask(std::string nameTask)
{
    mModelTasks->addTask(nameTask);
}

} // namespace operation
} // namespace controller
