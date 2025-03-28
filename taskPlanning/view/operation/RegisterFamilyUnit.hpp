#pragma once

#include <QObject>

#include <memory>

#include <controller/operation/IRegisterFamilyUnit.hpp>

namespace view {
namespace operation {

class RegisterFamilyUnit : public QObject
{
    Q_OBJECT
public:
    RegisterFamilyUnit(std::shared_ptr<controller::operation::IRegisterFamilyUnit> controllerRegisterFamilyUnit,
                       QObject *parent = nullptr);

    Q_INVOKABLE void registerFamilyUnit(QString nameFamilyUnit);

private:
    std::shared_ptr<controller::operation::IRegisterFamilyUnit> mControllerRegisterFamilyUnit;
};

} // namespace operation
} // namespace view

