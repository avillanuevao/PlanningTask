#pragma once

#include <memory>

#include <controller/operation/IRegisterFamilyUnit.hpp>
#include <model/IFamiliesUnits.hpp>

namespace controller {
namespace operation {

class RegisterFamilyUnit : public controller::operation::IRegisterFamilyUnit
{
public:
    RegisterFamilyUnit(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits);

    void registerFamilyUnit(std::string nameFamilyUnit) override;

private:
    std::shared_ptr<model::IFamiliesUnits> mModelFamiliesUnits;
};

} // namespace operation
} // namespace controller


