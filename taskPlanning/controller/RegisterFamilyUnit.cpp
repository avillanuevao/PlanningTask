#include "RegisterFamilyUnit.hpp"

namespace controller {

RegisterFamilyUnit::RegisterFamilyUnit(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits)
    : mModelFamiliesUnits(modelFamiliesUnits)
{}

void RegisterFamilyUnit::registerFamilyUnit(std::string nameFamilyUnit)
{
    mModelFamiliesUnits->registerFamilyUnit(nameFamilyUnit);
}

} // namespace controller
