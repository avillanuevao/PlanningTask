#pragma once

#include <string>

namespace controller {

class IAddUser
{
public:
    IAddUser() = default;

    virtual void addUser(std::string nameUser) = 0;
};

} // namespace controller
