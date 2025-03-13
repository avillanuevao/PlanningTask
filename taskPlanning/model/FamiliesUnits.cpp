#include "FamiliesUnits.hpp"

#include <model/FamilyUnit.hpp>

namespace model {

FamiliesUnits::FamiliesUnits() {}

void FamiliesUnits::registerFamilyUnit(std::string nameFamilyUnit)
{
    model::FamilyUnit newFamilyUnit = model::FamilyUnit(nameFamilyUnit);

    mFamiliesUnits[nameFamilyUnit] = newFamilyUnit;

    std::cout << "Registrado" << std::endl;
}

} // namespace model
