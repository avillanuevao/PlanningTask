#pragma once

#include <memory>

#include <controller/operation/ISelectFamilyUnit.hpp>
#include <model/IFamiliesUnits.hpp>

namespace controller {
namespace operation {

class SelectFamilyUnit : public controller::operation::ISelectFamilyUnit
{
public:
    SelectFamilyUnit(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits);

    void selectFamilyUnit(std::string nameFamilyUnit) override;

private:
    std::shared_ptr<model::IFamiliesUnits> mModelFamiliesUnits;
};

} // namespace operation
} // namespace controller
