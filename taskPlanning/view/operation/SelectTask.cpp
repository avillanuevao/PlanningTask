#include "SelectTask.hpp"

namespace view {
namespace operation {



SelectTask::SelectTask(std::shared_ptr<controller::operation::ISelectTask> controllerSelectTask,
                       QObject *parent)
    : mControllerSelectTask(controllerSelectTask)
{

}

void SelectTask::selectTask(QString nameTask)
{
    bool isNameTask = !nameTask.toStdString().empty();
    if (isNameTask) {
        mControllerSelectTask->selectTask(nameTask.toStdString());
    }
}

} // namespace operation
} // namespace view
