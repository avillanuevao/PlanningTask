#pragma once

#include <QObject>

#include <memory>

#include <controller/operation/IAddUser.hpp>

namespace view {
namespace operation {

class AddUser : public QObject
{
    Q_OBJECT
public:
    AddUser(std::shared_ptr<controller::operation::IAddUser> controllerAddUser, QObject *parent = nullptr);

    Q_INVOKABLE void addUser(QString nameUser);

private:
    std::shared_ptr<controller::operation::IAddUser> mControllerAddUser;
};

} // namespace operation
} // namespace view
