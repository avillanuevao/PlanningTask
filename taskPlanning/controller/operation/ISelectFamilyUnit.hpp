#pragma once

namespace controller {
namespace operation {

class ISelectFamilyUnit
{
public:
    ISelectFamilyUnit() = default;

    virtual void selectFamilyUnit(std::string nameFamilyUnit) = 0;
};

} // namespace operation
} // namespace controller

