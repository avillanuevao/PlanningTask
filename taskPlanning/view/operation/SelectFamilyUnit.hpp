#pragma once

#include <QObject>

#include <controller/operation/ISelectFamilyUnit.hpp>

namespace view {
namespace operation {

class SelectFamilyUnit : public QObject
{
    Q_OBJECT
public:
    SelectFamilyUnit(std::shared_ptr<controller::operation::ISelectFamilyUnit> controllerSelectFamilyUnit,
                     QObject *parent = nullptr);

    Q_INVOKABLE void selectFamilyUnit(QString nameFamilyUnit);

private:
    std::shared_ptr<controller::operation::ISelectFamilyUnit> mControllerSelectFamilyUnit;
};

} // namespace operation
} // namespace view
