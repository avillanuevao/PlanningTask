#pragma once

#include <string>

namespace model {
namespace signal {

class AddedFamilyUnit
{
public:
    AddedFamilyUnit(std::string nameFamilyUnit);

    std::string getNameFamilyUnit() const;

private:
    std::string mNameFamilyUnit;
};

} // namespace signal
} // namespace model

