#pragma once

#include <iostream>
#include <memory>

#include <model/IUsers.hpp>
#include <model/ITasks.hpp>

namespace model {

class IFamilyUnit
{
public:
    IFamilyUnit() = default;

    virtual void setUserSelected(std::string userSelected) = 0;
    virtual std::string getUserSelected() const = 0;
    virtual void setTaskSelected(std::string taskSelected) = 0;
    virtual std::string getTaskSelected() const = 0;
    virtual std::shared_ptr<model::IUsers> getUsers() const = 0;
    virtual std::shared_ptr<model::ITasks> getTasks() const = 0;

};

} // namespace model
