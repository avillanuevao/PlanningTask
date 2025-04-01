#include "FamiliesUnits.hpp"

#include <model/FamilyUnit.hpp>
#include <model/IUsers.hpp>
#include <model/ITasks.hpp>
#include <model/Users.hpp>
#include <model/Tasks.hpp>

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

void FamiliesUnits::addUser(std::string nameUser)
{
    std::shared_ptr<model::IUsers> users = mFamiliesUnits[mFamilyUnitSelected]->getUsers();
    users->addUser(nameUser);

    model::signal::AddedUser signal(nameUser);
    this->utils::Publisher<model::signal::AddedUser>::notifySubscribers(signal);
}

void FamiliesUnits::addTask(std::string nameTask)
{
    std::shared_ptr<model::ITasks> tasks = mFamiliesUnits[mFamilyUnitSelected]->getTasks();
    tasks->addTask(nameTask);

    model::signal::AddedTask signal(nameTask);
    this->utils::Publisher<model::signal::AddedTask>::notifySubscribers(signal);
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
    std::shared_ptr<model::IUsers> newUsers = std::make_shared<model::Users>();
    std::shared_ptr<model::ITasks> newTasks = std::make_shared<model::Tasks>();
    std::shared_ptr<model::IFamilyUnit> newFamilyUnit = std::make_shared<model::FamilyUnit>(nameFamilyUnit, newUsers, newTasks);

    mFamiliesUnits[nameFamilyUnit] = newFamilyUnit;
}

void model::FamiliesUnits::notifyAddedFamilyUnit(std::string nameFamilyUnit)
{
    model::signal::AddedFamilyUnit signal(nameFamilyUnit);
    this->utils::Publisher<model::signal::AddedFamilyUnit>::notifySubscribers(signal);
}

} // namespace model
