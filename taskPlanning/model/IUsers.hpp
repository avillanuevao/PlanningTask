#pragma once

#include <model/IUser.hpp>

#include <string>
#include <memory>

namespace model {

class IUsers
{
public:
    IUsers() = default;

    virtual void addUser(std::string nameUser) = 0;
    virtual std::shared_ptr<model::IUser> getUser(std::string nameUser) = 0;
};

} // namespace model
