#include "SelectFamilyUnit.hpp"

namespace view {
namespace operation {

SelectFamilyUnit::SelectFamilyUnit(std::unique_ptr<controller::operation::ISelectFamilyUnit> controllerSelectFamilyUnit,
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

} // namespace operation
} // namespace view
