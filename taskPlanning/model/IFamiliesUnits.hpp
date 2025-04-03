#pragma once

#include <iostream>

#include <utils/Publisher.hpp>
#include <model/signal/AddedFamilyUnit.hpp>
#include <model/signal/AddedTask.hpp>
#include <model/signal/AddedUser.hpp>

namespace model {

class IFamiliesUnits
    : public utils::Publisher<model::signal::AddedFamilyUnit>
    , public utils::Publisher<model::signal::AddedTask>
    , public utils::Publisher<model::signal::AddedUser>
{
public:
    IFamiliesUnits() = default;

    virtual void registerFamilyUnit(std::string nameFamilyUnit) = 0;
    virtual void addUser(std::string nameUser) = 0;
    virtual void addTask(std::string nameTask) = 0;
    virtual void setFamilyUnitSelected(std::string familyUnitSelected) = 0;
    virtual void setUserSelected(std::string userSelected) = 0;
    virtual void setTaskSelected(std::string taskSelected) = 0;
    virtual void assignTask() = 0;
};

} // namespace model
