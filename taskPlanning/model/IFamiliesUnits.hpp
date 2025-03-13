#ifndef IFAMILIESUNITS_HPP
#define IFAMILIESUNITS_HPP

#include <iostream>

namespace model {

class IFamiliesUnits
{
public:
    IFamiliesUnits() = default;

    virtual void registerFamilyUnit(std::string nameFamilyUnit) = 0;
};

} // namespace model

#endif // IFAMILIESUNITS_HPP
