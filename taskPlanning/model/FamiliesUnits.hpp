#pragma once

#include <map>

#include <model/IFamiliesUnits.hpp>
#include <model/IFamilyUnit.hpp>

namespace model {

class FamiliesUnits : public model::IFamiliesUnits
{
public:
    FamiliesUnits();

    void registerFamilyUnit(std::string nameFamilyUnit) override;
    void setFamilyUnitSelected(std::string familyUnitSelected) override;

private:
    void addFamilyUnit(std::string nameFamilyUnit);
    void notifyAddedFamilyUnit(std::string nameFamilyUnit);

    std::map<std::string, model::IFamilyUnit> mFamiliesUnits;
    std::string mFamilyUnitSelected;
};

} // namespace model

