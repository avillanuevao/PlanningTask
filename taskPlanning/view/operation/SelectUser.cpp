#include "SelectUser.hpp"

namespace view {
namespace operation {

SelectUser::SelectUser(std::shared_ptr<controller::operation::ISelectUser> controllerSelectUser,
                       QObject *parent)
    : mControllerSelectUser(controllerSelectUser)
{}

void SelectUser::selectUser(QString nameUser)
{
    bool isNameUser = !nameUser.toStdString().empty();
    if (isNameUser) {
        mControllerSelectUser->selectUser(nameUser.toStdString());
    }
}

} // namespace operation
} // namespace view
