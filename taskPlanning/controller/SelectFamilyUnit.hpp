#pragma once

#include <memory>

#include <controller/ISelectFamilyUnit.hpp>
#include <model/IFamiliesUnits.hpp>

namespace controller {

class SelectFamilyUnit : public controller::ISelectFamilyUnit
{
public:
    SelectFamilyUnit(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits);

    void selectFamilyUnit(std::string nameFamilyUnit) override;

private:
    std::shared_ptr<model::IFamiliesUnits> mModelFamiliesUnits;
};

} // namespace controller
