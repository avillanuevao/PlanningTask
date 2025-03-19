#pragma once

#include <utils/Subscriber.hpp>
#include <utils/Publisher.hpp>
#include <model/signal/AddedUser.hpp>
#include <controller/visualization/signal/AddedUser.hpp>

namespace controller {
namespace visualization {

class IShowUser : public utils::Subscriber<model::signal::AddedUser>, public utils::Publisher<controller::visualization::signal::AddedUser>
{
public:
    IShowUser() = default;

    virtual void update(const model::signal::AddedUser& data) override = 0;
};

} // namespace controller
} // namespace visualization
