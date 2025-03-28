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

void FamiliesUnits::setUserSelected(std::string userSelected)
{
    std::shared_ptr<model::IFamilyUnit> familyUnitSelected = mFamiliesUnits[mFamilyUnitSelected];

    familyUnitSelected->setUserSelected(userSelected);
}

void FamiliesUnits::setTaskSelected(std::string taskSelected)
{
    std::shared_ptr<model::IFamilyUnit> familyUnitSelected = mFamiliesUnits[mFamilyUnitSelected];

    familyUnitSelected->setTaskSelected(taskSelected);
}

void model::FamiliesUnits::addFamilyUnit(std::string nameFamilyUnit)
{
    std::shared_ptr<model::IFamilyUnit> newFamilyUnit = std::make_shared<model::FamilyUnit>(nameFamilyUnit);

    mFamiliesUnits[nameFamilyUnit] = newFamilyUnit;
}

void model::FamiliesUnits::notifyAddedFamilyUnit(std::string nameFamilyUnit)
{
    model::signal::AddedFamilyUnit signal(nameFamilyUnit);
    notifySubscribers(signal);
}

} // namespace model
