#include "AddTask.hpp"

namespace view {
namespace operation {

AddTask::AddTask(std::shared_ptr<controller::operation::IAddTask> controllerAddTask, QObject *parent)
    : mControllerAddTask(controllerAddTask)
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
