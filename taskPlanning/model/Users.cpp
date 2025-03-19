#include "Users.hpp"

#include <model/User.hpp>

namespace model {

Users::Users() {}

void Users::addUser(std::string nameUser)
{
    bool isNewUser = !mUsers.count(nameUser);

    if (isNewUser)
    {
        std::shared_ptr<model::IUser> newUser = std::make_shared<model::User>(nameUser);
        mUsers[nameUser] = newUser;

        model::signal::AddedUser signal(nameUser);
        notifySubscribers(signal);
    }
}

} // namespace model
