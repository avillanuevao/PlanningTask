#pragma once

#include <iostream>

#include <utils/Publisher.hpp>
#include <model/signal/AddedFamilyUnit.hpp>

namespace model {

class IFamiliesUnits : public utils::Publisher<model::signal::AddedFamilyUnit>
{
public:
    IFamiliesUnits() = default;

    virtual void registerFamilyUnit(std::string nameFamilyUnit) = 0;
    virtual void setFamilyUnitSelected(std::string familyUnitSelected) = 0;
};

} // namespace model
