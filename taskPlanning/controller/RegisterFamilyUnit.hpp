#ifndef REGISTERFAMILYUNIT_HPP
#define REGISTERFAMILYUNIT_HPP

#include <memory>

#include <controller/IRegisterFamilyUnit.hpp>
#include <model/IFamiliesUnits.hpp>

namespace controller {

class RegisterFamilyUnit : public controller::IRegisterFamilyUnit
{
public:
    RegisterFamilyUnit(std::shared_ptr<model::IFamiliesUnits> modelFamiliesUnits);

    void registerFamilyUnit(std::string nameFamilyUnit) override;

private:
    std::shared_ptr<model::IFamiliesUnits> mModelFamiliesUnits;
};

} // namespace controller

#endif // REGISTERFAMILYUNIT_HPP
