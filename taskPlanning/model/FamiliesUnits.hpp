#pragma once

#include <map>
#include <memory>

#include <model/IFamiliesUnits.hpp>
#include <model/IFamilyUnit.hpp>

namespace model {

class FamiliesUnits : public model::IFamiliesUnits
{
public:
    FamiliesUnits();

    void registerFamilyUnit(std::string nameFamilyUnit) override;
    void addUser(std::string nameUser) override;
    void addTask(std::string nameTask) override;
    void setFamilyUnitSelected(std::string familyUnitSelected) override;
    void setUserSelected(std::string userSelected) override;
    void setTaskSelected(std::string taskSelected) override;
    void assignTask() override;

private:
    void addFamilyUnit(std::string nameFamilyUnit);
    void notifyAddedFamilyUnit(std::string nameFamilyUnit);

    std::map<std::string, std::shared_ptr<model::IFamilyUnit>> mFamiliesUnits;
    std::string mFamilyUnitSelected;
};

} // namespace model

