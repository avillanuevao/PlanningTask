#pragma once

#include <controller/visualization/IShowFamilyUnit.hpp>

namespace controller {
namespace visualization {


class ShowFamilyUnit : public controller::visualization::IShowFamilyUnit
{
public:
    ShowFamilyUnit();

    void update(const model::signal::AddedFamilyUnit& data) override;
};

} // namespace controller
} // namespace visualization
