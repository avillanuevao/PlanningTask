#include "FamilyUnit.hpp"

namespace model {

FamilyUnit::FamilyUnit(std::string nameFamilyUnit)
    : mNameFamilyUnit(nameFamilyUnit)
{}

void FamilyUnit::setUserSelected(std::string userSelected)
{
    mUserSelected = userSelected;
}

std::string FamilyUnit::getUserSelected() const
{
    return mUserSelected;
}

void FamilyUnit::setTaskSelected(std::string taskSelected)
{
    mTaskSelected = taskSelected;
}

std::string FamilyUnit::getTaskSelected() const
{
    return mTaskSelected;
}

} // namespace model
