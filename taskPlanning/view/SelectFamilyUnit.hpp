#pragma once

#include <QObject>

#include <controller/ISelectFamilyUnit.hpp>

namespace view {

class SelectFamilyUnit : public QObject
{
    Q_OBJECT
public:
    SelectFamilyUnit(std::unique_ptr<controller::ISelectFamilyUnit> controllerSelectFamilyUnit,
                     QObject *parent = nullptr);

    Q_INVOKABLE void selectFamilyUnit(QString nameFamilyUnit);

private:
    std::unique_ptr<controller::ISelectFamilyUnit> mControllerSelectFamilyUnit;
};

} // namespace view
