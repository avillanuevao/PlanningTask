#pragma once

#include <string>

namespace controller {
namespace operation {

class ISelectUser
{
public:
    ISelectUser() = default;

    virtual void selectUser(std::string nameUser) = 0;
};

} // namespace operation
} // namespace controller
