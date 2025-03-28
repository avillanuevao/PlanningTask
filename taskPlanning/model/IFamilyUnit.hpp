#ifndef IFAMILYUNIT_HPP
#define IFAMILYUNIT_HPP

#include <iostream>

namespace model {

class IFamilyUnit
{
public:
    IFamilyUnit() = default;

    virtual void setUserSelected(std::string userSelected) = 0;
    virtual std::string getUserSelected() const = 0;
    virtual void setTaskSelected(std::string taskSelected) = 0;
    virtual std::string getTaskSelected() const = 0;

};

} // namespace model

#endif // IFAMILYUNIT_HPP
