#pragma once

#include <memory>

#include <controller/operation/IAddUser.hpp>
#include <model/IUsers.hpp>

namespace controller {
namespace operation {

class AddUser : public controller::operation::IAddUser
{
public:
    AddUser(std::shared_ptr<model::IUsers> modelUsers);

    void addUser(std::string nameUser) override;

private:
    std::shared_ptr<model::IUsers> mModelUsers;
};

} // namespace operation
} // namespace controller
