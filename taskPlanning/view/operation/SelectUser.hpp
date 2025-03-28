#pragma once

#include <QObject>

#include <controller/operation/ISelectUser.hpp>

namespace view {
namespace operation {

class SelectUser: public QObject
{
    Q_OBJECT
public:
    SelectUser(std::shared_ptr<controller::operation::ISelectUser> controllerSelectUser,
               QObject *parent = nullptr);

    Q_INVOKABLE void selectUser(QString nameUser);
private:
    std::shared_ptr<controller::operation::ISelectUser> mControllerSelectUser;
};

} // namespace operation
} // namespace view
