#pragma once

#include <QObject>

#include <memory>

#include <controller/operation/IAddTask.hpp>

namespace view {
namespace operation {

class AddTask : public QObject
{
    Q_OBJECT
public:
    AddTask(std::shared_ptr<controller::operation::IAddTask> controllerAddTask, QObject *parent = nullptr);

    Q_INVOKABLE void addTask(QString nameTask);

private:
    std::shared_ptr<controller::operation::IAddTask> mControllerAddTask;
};

} // namespace operation
} // namespace view
