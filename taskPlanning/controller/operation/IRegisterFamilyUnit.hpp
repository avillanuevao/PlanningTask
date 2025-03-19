#pragma once

#include <iostream>

namespace controller {
namespace operation {

class IRegisterFamilyUnit
{
public:
    IRegisterFamilyUnit() = default;

    virtual void registerFamilyUnit(std::string nameFamilyUnit) = 0;
};

} // namespace operation
} // namespace controller

