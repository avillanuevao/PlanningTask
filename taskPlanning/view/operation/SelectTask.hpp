#pragma once

#include <QObject>

#include <memory>

#include <controller/operation/ISelectTask.hpp>

namespace view {
namespace operation {

class SelectTask : public QObject
{
    Q_OBJECT
public:
    SelectTask(std::shared_ptr<controller::operation::ISelectTask> controllerSelectTask,
               QObject *parent = nullptr);

    Q_INVOKABLE void selectTask(QString nameTask);
private:
    std::shared_ptr<controller::operation::ISelectTask> mControllerSelectTask;
};

} // namespace operation
} // namespace view
