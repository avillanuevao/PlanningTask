#ifndef IREGISTERFAMILYUNIT_HPP
#define IREGISTERFAMILYUNIT_HPP

#include <iostream>

namespace controller {

class IRegisterFamilyUnit
{
public:
    IRegisterFamilyUnit() = default;

    virtual void registerFamilyUnit(std::string nameFamilyUnit) = 0;
};

} // namespace controller

#endif // IREGISTERFAMILYUNIT_HPP
