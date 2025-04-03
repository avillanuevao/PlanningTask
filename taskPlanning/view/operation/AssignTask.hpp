#pragma once

#include <QObject>

#include <memory>
#include <iostream>

#include <controller/operation/IAssignTask.hpp>

namespace view {
namespace operation {

class AssignTask : public QObject
{
    Q_OBJECT
public:
    AssignTask(std::shared_ptr<controller::operation::IAssignTask> controllerAssignTask, QObject *parent = nullptr);

    Q_INVOKABLE void assignTask();

private:
    std::shared_ptr<controller::operation::IAssignTask> mControllerAssignTask;
};

} // namespace operation
} // namespace view
