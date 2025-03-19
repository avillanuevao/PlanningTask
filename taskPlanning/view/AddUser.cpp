#include "AddUser.hpp"

namespace view {

AddUser::AddUser(std::shared_ptr<controller::IAddUser> controllerAddUser, QObject *parent)
    : mControllerAddUser(controllerAddUser)
    , QObject(parent)
{

}

void AddUser::addUser(QString nameUser)
{
    bool isNameUser = !nameUser.toStdString().empty();

    if (isNameUser) {
        mControllerAddUser->addUser(nameUser.toStdString());
    }
}

} // namespace view
