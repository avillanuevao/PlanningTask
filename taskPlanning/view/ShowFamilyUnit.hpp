#pragma once

#include <QObject>
#include <QStringList>

#include <iostream>
#include <vector>

namespace view {

class ShowFamilyUnit : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QStringList familiesUnits READ getFamiliesUnits NOTIFY familiesUnitsChanged)
public:
    ShowFamilyUnit(QObject *parent = nullptr);

    QStringList getFamiliesUnits() const;
    void loadFamiliesUnits();

signals:
    void familiesUnitsChanged();

private:
    QStringList mNameFamiliesUnits;
};

} // namespace view

