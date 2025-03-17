#include "ShowFamilyUnit.hpp"

#include <iostream>

namespace controller {

ShowFamilyUnit::ShowFamilyUnit() {}

void ShowFamilyUnit::update(const model::signal::AddedFamilyUnit &data)
{
    controller::signal::AddedFamilyUnit signal(data.getNameFamilyUnit());
    notifySubscribers(signal);
}

} // namespace controller
