#pragma once

#include <controller/visualization/IShowUser.hpp>

namespace controller {
namespace visualization {

class ShowUser : public controller::visualization::IShowUser
{
public:
    ShowUser();

    void update(const model::signal::AddedUser &data) override;
};

} // namespace controller
} // namespace visualization
