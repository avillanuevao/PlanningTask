#pragma once

#include <map>
#include <memory>

#include <model/IFamilyUnit.hpp>

namespace model {

class FamilyUnit : public model::IFamilyUnit
{
public:
    FamilyUnit(std::string nameFamilyUnit, std::shared_ptr<model::IUsers> users, std::shared_ptr<model::ITasks> tasks);

    void setUserSelected(std::string userSelected) override;
    std::string getUserSelected() const override;
    void setTaskSelected(std::string taskSelected) override;
    std::string getTaskSelected() const override;

    std::shared_ptr<model::IUsers> getUsers() const override;
    std::shared_ptr<model::ITasks> getTasks() const override;

    void assignTask() override;

private:
    std::string mNameFamilyUnit;
    std::string mUserSelected;
    std::string mTaskSelected;
    std::shared_ptr<model::IUsers> mUsers;
    std::shared_ptr<model::ITasks> mTasks;
};

} // namespace model

