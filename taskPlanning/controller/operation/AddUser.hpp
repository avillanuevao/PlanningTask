#pragma once

#include <memory>

#include <controller/operation/IAddUser.hpp>
#include <model/IFamiliesUnits.hpp>

namespace controller {
namespace operation {

class AddUser : public controller::operation::IAddUser
{
public:
    AddUser(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits);

    void addUser(std::string nameUser) override;

private:
    std::shared_ptr<model::IFamiliesUnits> mModelFamiliesUnits;
};

} // namespace operation
} // namespace controller
