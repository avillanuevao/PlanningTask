#include "SelectFamilyUnit.hpp"

namespace controller {
namespace operation {

SelectFamilyUnit::SelectFamilyUnit(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits)
    : mModelFamiliesUnits(modelFamiliesUnits) {}

void SelectFamilyUnit::selectFamilyUnit(std::string nameFamilyUnit)
{
    mModelFamiliesUnits->setFamilyUnitSelected(nameFamilyUnit);
}

} // namespace operation
} // namespace controller
