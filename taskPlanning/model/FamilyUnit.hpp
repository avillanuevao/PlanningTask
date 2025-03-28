#ifndef FAMILYUNIT_HPP
#define FAMILYUNIT_HPP

#include <model/IFamilyUnit.hpp>

namespace model {

class FamilyUnit : public model::IFamilyUnit
{
public:
    FamilyUnit(std::string nameFamilyUnit);

    void setUserSelected(std::string userSelected) override;
    std::string getUserSelected() const override;
    void setTaskSelected(std::string taskSelected) override;
    std::string getTaskSelected() const override;

private:
    std::string mNameFamilyUnit;
    std::string mUserSelected;
    std::string mTaskSelected;
};

} // namespace model

#endif // FAMILYUNIT_HPP
