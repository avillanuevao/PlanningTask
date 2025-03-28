#include "AddedFamilyUnit.hpp"

namespace model {
namespace signal {

AddedFamilyUnit::AddedFamilyUnit(std::string nameFamilyUnit):
    mNameFamilyUnit(nameFamilyUnit){}

std::string AddedFamilyUnit::getNameFamilyUnit() const
{
    return mNameFamilyUnit;
}

} // namespace signal
} // namespace model
