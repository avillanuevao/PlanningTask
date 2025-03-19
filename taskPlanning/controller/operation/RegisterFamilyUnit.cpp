#include "RegisterFamilyUnit.hpp"

namespace controller {
namespace operation {

RegisterFamilyUnit::RegisterFamilyUnit(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits)
    : mModelFamiliesUnits(modelFamiliesUnits)
{}

void RegisterFamilyUnit::registerFamilyUnit(std::string nameFamilyUnit)
{
    mModelFamiliesUnits->registerFamilyUnit(nameFamilyUnit);
}

} // namespace operation
} // namespace controller

