#pragma once

#include <QObject>
#include <QStringList>

#include <memory>

#include <utils/Subscriber.hpp>
#include <controller/visualization/signal/AddedTask.hpp>
#include <controller/visualization/IShowTask.hpp>

namespace view {
namespace visualization {

class ShowTask : public QObject, public utils::Subscriber<controller::visualization::signal::AddedTask>
{
    Q_OBJECT
    Q_PROPERTY(QStringList tasks READ getTasks NOTIFY tasksChanged)
public:
    ShowTask(std::shared_ptr<controller::visualization::IShowTask> controllerShowTask, QObject *parent = nullptr);

    void update(const controller::visualization::signal::AddedTask &data) override;

    QStringList getTasks() const;

signals:
    void tasksChanged();

private:
    QStringList mNameTasks;
    std::shared_ptr<controller::visualization::IShowTask> mControllerShowTask;
};

} // namespace visualization
} // namespace view
