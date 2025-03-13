#pragma once

#include <QObject>

#include <memory>

#include <controller/IRegisterFamilyUnit.hpp>

namespace view {

class RegisterFamilyUnit : public QObject
{
    Q_OBJECT
public:
    RegisterFamilyUnit(std::unique_ptr<controller::IRegisterFamilyUnit> controllerRegisterFamilyUnit,
                       QObject *parent = nullptr);

    Q_INVOKABLE void registerFamilyUnit(QString nameFamilyUnit);

private:
    std::unique_ptr<controller::IRegisterFamilyUnit> mControllerRegisterFamilyUnit;
};

} // namespace view

