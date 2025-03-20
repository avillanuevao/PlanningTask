#include "AddTask.hpp"

namespace view {
namespace operation {

AddTask::AddTask(std::unique_ptr<controller::operation::IAddTask> controllerAddTask, QObject *parent)
    : mControllerAddTask(std::move(controllerAddTask))
    , QObject(parent)
{

}

void AddTask::addTask(QString nameTask)
{
    bool isNameTask = !nameTask.toStdString().empty();

    if (isNameTask) {
        mControllerAddTask->addTask(nameTask.toStdString());
    }
}

} // namespace operation
} // namespace view
