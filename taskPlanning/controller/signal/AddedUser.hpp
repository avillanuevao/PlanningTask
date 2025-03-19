#pragma once

#include <string>

namespace controller {
namespace signal {

class AddedUser
{
public:
    AddedUser(std::string nameUser);

    std::string getNameUser() const;

private:
    std::string mNameUser;
};

} // namespace signal
} // namespace controller
