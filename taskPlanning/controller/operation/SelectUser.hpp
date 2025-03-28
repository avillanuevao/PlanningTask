#pragma once

#include <memory>

#include <controller/operation/ISelectUser.hpp>
#include <model/IFamiliesUnits.hpp>

namespace controller {
namespace operation {

class SelectUser : public controller::operation::ISelectUser
{
public:
    SelectUser(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits);

    void selectUser(std::string nameUser) override;


private:
    std::shared_ptr<model::IFamiliesUnits> mModelFamiliesUnits;
};

} // namespace operation
} // namespace controller
