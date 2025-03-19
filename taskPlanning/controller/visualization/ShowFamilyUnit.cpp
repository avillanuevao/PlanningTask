#include "ShowFamilyUnit.hpp"

#include <iostream>

namespace controller {
namespace visualization {

ShowFamilyUnit::ShowFamilyUnit() {}

void ShowFamilyUnit::update(const model::signal::AddedFamilyUnit &data)
{
    controller::visualization::signal::AddedFamilyUnit signal(data.getNameFamilyUnit());
    notifySubscribers(signal);
}

} // namespace controller
} // namespace visualization
