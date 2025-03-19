#include "ShowUser.hpp"

namespace view {

ShowUser::ShowUser(std::shared_ptr<controller::IShowUser> controllerShowUser, QObject *parent)
    : mControllerShowUser(controllerShowUser)
    , QObject(parent)
{}

void ShowUser::update(const controller::signal::AddedUser &data)
{
    mNameUsers.append(QString::fromStdString(data.getNameUser()));

    emit usersChanged();
}

QStringList ShowUser::getUsers() const
{
    return mNameUsers;
}

} // namespace view
