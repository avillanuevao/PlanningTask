#include "AddUser.hpp"

namespace controller {
namespace operation {

AddUser::AddUser(std::shared_ptr<model::IUsers> modelUsers)
    : mModelUsers(modelUsers)
{}

void AddUser::addUser(std::string nameUser)
{
    mModelUsers->addUser(nameUser);
}

} // namespace operation
} // namespace controller
