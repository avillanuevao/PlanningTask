#include "AddUser.hpp"

namespace controller {

AddUser::AddUser(std::shared_ptr<model::IUsers> modelUsers)
    : mModelUsers(modelUsers)
{}

void AddUser::addUser(std::string nameUser)
{
    mModelUsers->addUser(nameUser);
}

} // namespace controller
