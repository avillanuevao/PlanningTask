#include "AddedUser.hpp"

namespace controller {
namespace visualization {
namespace signal {

AddedUser::AddedUser(std::string nameUser)
    : mNameUser(nameUser)
{}

std::string AddedUser::getNameUser() const
{
    return mNameUser;
}

} // namespace signal
} // namespace visualization
} // namespace controller
