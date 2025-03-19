#pragma once

#include <QObject>

#include <memory>

#include <controller/IAddUser.hpp>

namespace view {

class AddUser : public QObject
{
    Q_OBJECT
public:
    AddUser(std::shared_ptr<controller::IAddUser> controllerAddUser, QObject *parent = nullptr);

    Q_INVOKABLE void addUser(QString nameUser);

private:
    std::shared_ptr<controller::IAddUser> mControllerAddUser;
};

} // namespace view
