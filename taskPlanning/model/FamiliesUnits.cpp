#include "FamiliesUnits.hpp"

#include <model/FamilyUnit.hpp>

namespace model {

FamiliesUnits::FamiliesUnits() {}

void FamiliesUnits::registerFamilyUnit(std::string nameFamilyUnit)
{
    bool isNewFamilyUnit = !mFamiliesUnits.count(nameFamilyUnit);
    if (isNewFamilyUnit)
    {
        addFamilyUnit(nameFamilyUnit);

        notifyAddedFamilyUnit(nameFamilyUnit);
    }
}

void FamiliesUnits::setFamilyUnitSelected(std::string familyUnitSelected)
{
    bool isFamilyUnit = mFamiliesUnits.count(familyUnitSelected);
    if (isFamilyUnit)
    {
        mFamilyUnitSelected = familyUnitSelected;
    }
}

void model::FamiliesUnits::addFamilyUnit(std::string nameFamilyUnit)
{
    model::FamilyUnit newFamilyUnit = model::FamilyUnit(nameFamilyUnit);

    mFamiliesUnits[nameFamilyUnit] = newFamilyUnit;
}

void model::FamiliesUnits::notifyAddedFamilyUnit(std::string nameFamilyUnit)
{
    model::signal::AddedFamilyUnit signal(nameFamilyUnit);
    notifySubscribers(signal);
}

} // namespace model
