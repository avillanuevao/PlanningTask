#include "ShowUser.hpp"

namespace view {
namespace visualization {

ShowUser::ShowUser(std::shared_ptr<controller::visualization::IShowUser> controllerShowUser, QObject *parent)
    : mControllerShowUser(controllerShowUser)
    , QObject(parent)
{}

void ShowUser::update(const controller::visualization::signal::AddedUser &data)
{
    mNameUsers.append(QString::fromStdString(data.getNameUser()));

    emit usersChanged();
}

QStringList ShowUser::getUsers() const
{
    return mNameUsers;
}

} // namespace visualization
} // namespace view
