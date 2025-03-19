#pragma once

#include <utils/Subscriber.hpp>
#include <utils/Publisher.hpp>
#include <model/signal/AddedUser.hpp>
#include <controller/signal/AddedUser.hpp>

namespace controller {

class IShowUser : public utils::Subscriber<model::signal::AddedUser>, public utils::Publisher<controller::signal::AddedUser>
{
public:
    IShowUser() = default;

    virtual void update(const model::signal::AddedUser& data) override = 0;
};

} // namespace controller
