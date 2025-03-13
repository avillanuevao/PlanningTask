#ifndef FAMILIESUNITS_HPP
#define FAMILIESUNITS_HPP

#include <map>

#include <model/IFamiliesUnits.hpp>
#include <model/IFamilyUnit.hpp>

namespace model {

class FamiliesUnits : public model::IFamiliesUnits
{
public:
    FamiliesUnits();

    void registerFamilyUnit(std::string nameFamilyUnit) override;

private:
    std::map<std::string, model::IFamilyUnit> mFamiliesUnits;
};

} // namespace model

#endif // FAMILIESUNITS_HPP
