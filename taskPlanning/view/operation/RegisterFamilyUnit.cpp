#include "RegisterFamilyUnit.hpp"

#include <iostream>

namespace view {
namespace operation {

RegisterFamilyUnit::RegisterFamilyUnit(
    std::shared_ptr<controller::operation::IRegisterFamilyUnit> controllerRegisterFamilyUnit, QObject *parent)
    : mControllerRegisterFamilyUnit(controllerRegisterFamilyUnit)
    , QObject(parent)
{}

void RegisterFamilyUnit::registerFamilyUnit(QString nameFamilyUnit)
{
    bool isNameFamilyUnit = !nameFamilyUnit.toStdString().empty();
    if (isNameFamilyUnit) {
        mControllerRegisterFamilyUnit->registerFamilyUnit(nameFamilyUnit.toStdString());
    }
}

} // namespace operation
} // namespace view
