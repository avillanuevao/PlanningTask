#pragma once

#include <controller/IShowUser.hpp>

namespace controller {

class ShowUser : public controller::IShowUser
{
public:
    ShowUser();

    void update(const model::signal::AddedUser &data) override;
};

} // namespace controller
