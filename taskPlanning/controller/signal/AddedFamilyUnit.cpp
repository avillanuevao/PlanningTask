#include "AddedFamilyUnit.hpp"

namespace controller {
namespace signal {

AddedFamilyUnit::AddedFamilyUnit(std::string nameFamilyUnit):
    mNameFamilyUnit(nameFamilyUnit){}

std::string AddedFamilyUnit::getNameFamilyUnit() const
{
    return mNameFamilyUnit;
}

} // namespace signal
} // namespace controller
