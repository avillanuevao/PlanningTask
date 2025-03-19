#pragma once

#include <string>

namespace controller {
namespace operation {

class IAddUser
{
public:
    IAddUser() = default;

    virtual void addUser(std::string nameUser) = 0;
};

} // namespace operation
} // namespace controller
