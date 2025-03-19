#include "AddedUser.hpp"

namespace model {
namespace signal {

AddedUser::AddedUser(std::string nameUser)
    : mNameUser(nameUser)
{}

std::string AddedUser::getNameUser() const
{
    return mNameUser;
}

} // namespace signal
} // namespace model
