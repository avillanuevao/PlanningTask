#pragma once

#include <map>
#include <string>

#include <model/IUsers.hpp>

namespace model {

class Users : public model::IUsers
{
public:
    Users();

    void addUser(std::string nameUser) override;
    std::shared_ptr<model::IUser> getUser(std::string nameUser) override;

private:
    std::map<std::string, std::shared_ptr<model::IUser>> mUsers;
};

} // namespace model
