#pragma once

#include <string>

namespace model {

class IUsers
{
public:
    IUsers() = default;

    virtual void addUser(std::string nameUser) = 0;
};

} // namespace model
