#include "SelectFamilyUnit.hpp"

namespace view {

SelectFamilyUnit::SelectFamilyUnit(std::unique_ptr<controller::ISelectFamilyUnit> controllerSelectFamilyUnit,
                                   QObject *parent)
    : mControllerSelectFamilyUnit(std::move(controllerSelectFamilyUnit))
    , QObject(parent)
{}

void SelectFamilyUnit::selectFamilyUnit(QString nameFamilyUnit)
{
    bool isNameFamilyUnit = !nameFamilyUnit.toStdString().empty();
    if (isNameFamilyUnit) {
        mControllerSelectFamilyUnit->selectFamilyUnit(nameFamilyUnit.toStdString());
    }
}

} // namespace view
