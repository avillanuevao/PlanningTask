#include "AddUser.hpp"

namespace view {
namespace operation {

AddUser::AddUser(std::shared_ptr<controller::operation::IAddUser> controllerAddUser, QObject *parent)
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

} // namespace operation
} // namespace view
