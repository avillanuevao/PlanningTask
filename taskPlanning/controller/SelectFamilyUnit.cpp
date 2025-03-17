#include "SelectFamilyUnit.hpp"

namespace controller {

SelectFamilyUnit::SelectFamilyUnit(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits)
    : mModelFamiliesUnits(modelFamiliesUnits) {}

void SelectFamilyUnit::selectFamilyUnit(std::string nameFamilyUnit)
{
    mModelFamiliesUnits->setFamilyUnitSelected(nameFamilyUnit);
}

} // namespace controller
