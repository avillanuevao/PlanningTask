#pragma once

#include <QObject>
#include <QStringList>

#include <iostream>
#include <vector>

#include <utils/Subscriber.hpp>
#include <controller/signal/AddedFamilyUnit.hpp>
#include <controller/IShowFamilyUnit.hpp>

namespace view {

class ShowFamilyUnit : public QObject, public utils::Subscriber<controller::signal::AddedFamilyUnit>
{
    Q_OBJECT
    Q_PROPERTY(QStringList familiesUnits READ getFamiliesUnits NOTIFY familiesUnitsChanged)
public:
    ShowFamilyUnit(std::shared_ptr<controller::IShowFamilyUnit> controllerShowFamilyUnit, QObject *parent = nullptr);

    QStringList getFamiliesUnits() const;
    void update(const controller::signal::AddedFamilyUnit& data);

signals:
    void familiesUnitsChanged();

private:
    QStringList mNameFamiliesUnits;
    std::shared_ptr<controller::IShowFamilyUnit> mControllerShowFamilyUnit;
};

} // namespace view

