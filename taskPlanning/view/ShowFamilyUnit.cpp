#include "ShowFamilyUnit.hpp"

namespace view {

ShowFamilyUnit::ShowFamilyUnit(std::shared_ptr<controller::IShowFamilyUnit> controllerShowFamilyUnit, QObject *parent)
    : mControllerShowFamilyUnit(controllerShowFamilyUnit), QObject(parent)
{
}

QStringList ShowFamilyUnit::getFamiliesUnits() const
{
    return mNameFamiliesUnits;
}

void ShowFamilyUnit::update(const controller::signal::AddedFamilyUnit &data)
{
    mNameFamiliesUnits.append(QString::fromStdString(data.getNameFamilyUnit()));

    emit familiesUnitsChanged();
}

} // namespace view
