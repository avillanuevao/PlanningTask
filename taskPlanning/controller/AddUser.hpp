#pragma once

#include <memory>

#include <controller/IAddUser.hpp>
#include <model/IUsers.hpp>

namespace controller {

class AddUser : public controller::IAddUser
{
public:
    AddUser(std::shared_ptr<model::IUsers> modelUsers);

    void addUser(std::string nameUser) override;

private:
    std::shared_ptr<model::IUsers> mModelUsers;
};

} // namespace controller
