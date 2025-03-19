#pragma once

#include <map>
#include <string>
#include <memory>

#include <model/IUsers.hpp>
#include <model/IUser.hpp>

namespace model {

class Users : public model::IUsers
{
public:
    Users();

    void addUser(std::string nameUser) override;

private:
    std::map<std::string, std::shared_ptr<model::IUser>> mUsers;
};

} // namespace model
