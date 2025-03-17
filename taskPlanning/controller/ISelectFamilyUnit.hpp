#pragma once

namespace controller {

class ISelectFamilyUnit
{
public:
    ISelectFamilyUnit() = default;

    virtual void selectFamilyUnit(std::string nameFamilyUnit) = 0;
};

} // namespace controller
