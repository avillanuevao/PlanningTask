#pragma once

#include <controller/visualization/IShowTask.hpp>

namespace controller {
namespace visualization {

class ShowTask : public controller::visualization::IShowTask
{
public:
    ShowTask();

    void update(const model::signal::AddedTask &data) override;
};

} // namespace visualization
} // namespace controller
