#pragma once

#include <utils/Subscriber.hpp>
#include <utils/Publisher.hpp>
#include <model/signal/AddedTask.hpp>
#include <controller/visualization/signal/AddedTask.hpp>

namespace controller {
namespace visualization {

class IShowTask : public utils::Subscriber<model::signal::AddedTask>, public utils::Publisher<controller::visualization::signal::AddedTask>
{
public:
    IShowTask() = default;

    virtual void update(const model::signal::AddedTask& data) override = 0;
};

} // namespace visualization
} // namespace controller
