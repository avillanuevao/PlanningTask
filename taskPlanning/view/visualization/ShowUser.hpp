#pragma once

#include <QObject>
#include <QStringList>

#include <utils/Subscriber.hpp>
#include <controller/visualization/signal/AddedUser.hpp>
#include <controller/visualization/IShowUser.hpp>

namespace view {
namespace visualization {

class ShowUser : public QObject, public utils::Subscriber<controller::visualization::signal::AddedUser>
{
    Q_OBJECT
    Q_PROPERTY(QStringList users READ getUsers NOTIFY usersChanged)
public:
    ShowUser(std::shared_ptr<controller::visualization::IShowUser> controllerShowUser, QObject *parent = nullptr);

    void update(const controller::visualization::signal::AddedUser &data) override;

    QStringList getUsers() const;

signals:
    void usersChanged();

private:
    QStringList mNameUsers;
    std::shared_ptr<controller::visualization::IShowUser> mControllerShowUser;
};

} // namespace visualization
} // namespace view
