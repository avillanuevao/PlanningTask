#include "FamilyUnit.hpp"

namespace model {

FamilyUnit::FamilyUnit(std::string nameFamilyUnit, std::shared_ptr<model::IUsers> users, std::shared_ptr<model::ITasks> tasks)
    : mNameFamilyUnit(nameFamilyUnit)
    , mUsers(users)
    , mTasks(tasks)
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

std::shared_ptr<model::IUsers> FamilyUnit::getUsers() const
{
    return mUsers;
}

std::shared_ptr<model::ITasks> FamilyUnit::getTasks() const
{
    return mTasks;
}

} // namespace model
