#include "ShowTask.hpp"

namespace view {
namespace visualization {

ShowTask::ShowTask(std::shared_ptr<controller::visualization::IShowTask> controllerShowTask,  QObject *parent)
    : mControllerShowTask(controllerShowTask)
    , QObject(parent)
{}

void ShowTask::update(const controller::visualization::signal::AddedTask &data)
{
    mNameTasks.append(QString::fromStdString(data.getNameTask()));

    emit tasksChanged();
}

QStringList ShowTask::getTasks() const
{
    return mNameTasks;
}

} // namespace visualization
} // namespace view
