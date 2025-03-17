#pragma once

#include <controller/IShowFamilyUnit.hpp>

namespace controller {

class ShowFamilyUnit : public controller::IShowFamilyUnit
{
public:
    ShowFamilyUnit();

    void update(const model::signal::AddedFamilyUnit& data) override;
};

} // namespace controller
