#include "AssignTask.hpp"

namespace view {
namespace operation {



AssignTask::AssignTask(std::shared_ptr<controller::operation::IAssignTask> controllerAssignTask,
                       QObject *parent)
    : mControllerAssignTask(controllerAssignTask)
    , QObject(parent)
{

}

void AssignTask::assignTask()
{
    std::cout << "ASSIGNTASKVIEW" << std::endl;
    mControllerAssignTask->assignTask();
}

} // namespace operation
} // namespace view
