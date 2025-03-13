#ifndef FAMILYUNIT_HPP
#define FAMILYUNIT_HPP

#include <model/IFamilyUnit.hpp>

namespace model {

class FamilyUnit : public model::IFamilyUnit
{
public:
    FamilyUnit(std::string nameFamilyUnit);

private:
    std::string name;
};

} // namespace model

#endif // FAMILYUNIT_HPP
