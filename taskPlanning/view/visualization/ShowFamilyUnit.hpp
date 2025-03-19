#pragma once

#include <QObject>
#include <QStringList>

#include <iostream>
#include <vector>

#include <utils/Subscriber.hpp>
#include <controller/visualization/signal/AddedFamilyUnit.hpp>
#include <controller/visualization/IShowFamilyUnit.hpp>

namespace view {
namespace visualization {

class ShowFamilyUnit : public QObject, public utils::Subscriber<controller::visualization::signal::AddedFamilyUnit>
{
    Q_OBJECT
    Q_PROPERTY(QStringList familiesUnits READ getFamiliesUnits NOTIFY familiesUnitsChanged)
public:
    ShowFamilyUnit(std::shared_ptr<controller::visualization::IShowFamilyUnit> controllerShowFamilyUnit, QObject *parent = nullptr);

    QStringList getFamiliesUnits() const;
    void update(const controller::visualization::signal::AddedFamilyUnit& data);

signals:
    void familiesUnitsChanged();

private:
    QStringList mNameFamiliesUnits;
    std::shared_ptr<controller::visualization::IShowFamilyUnit> mControllerShowFamilyUnit;
};

} // namespace visualization
} // namespace view

