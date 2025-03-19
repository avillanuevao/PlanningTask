#include "ShowFamilyUnit.hpp"

namespace view {
namespace visualization {

ShowFamilyUnit::ShowFamilyUnit(std::shared_ptr<controller::visualization::IShowFamilyUnit> controllerShowFamilyUnit, QObject *parent)
    : mControllerShowFamilyUnit(controllerShowFamilyUnit), QObject(parent)
{
}

QStringList ShowFamilyUnit::getFamiliesUnits() const
{
    return mNameFamiliesUnits;
}

void ShowFamilyUnit::update(const controller::visualization::signal::AddedFamilyUnit &data)
{
    mNameFamiliesUnits.append(QString::fromStdString(data.getNameFamilyUnit()));

    emit familiesUnitsChanged();
}

} // namespace visualization
} // namespace view
