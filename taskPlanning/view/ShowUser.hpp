#pragma once

#include <QObject>
#include <QStringList>

#include <utils/Subscriber.hpp>
#include <controller/signal/AddedUser.hpp>
#include <controller/IShowUser.hpp>

namespace view {

class ShowUser : public QObject, public utils::Subscriber<controller::signal::AddedUser>
{
    Q_OBJECT
    Q_PROPERTY(QStringList users READ getUsers NOTIFY usersChanged)
public:
    ShowUser(std::shared_ptr<controller::IShowUser> controllerShowUser, QObject *parent = nullptr);

    void update(const controller::signal::AddedUser &data) override;

    QStringList getUsers() const;

signals:
    void usersChanged();

private:
    QStringList mNameUsers;
    std::shared_ptr<controller::IShowUser> mControllerShowUser;
};

} // namespace view
