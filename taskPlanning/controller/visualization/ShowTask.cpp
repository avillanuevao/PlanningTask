#include "ShowTask.hpp"

namespace controller {
namespace visualization {

ShowTask::ShowTask() {}

void ShowTask::update(const model::signal::AddedTask &data)
{
    controller::visualization::signal::AddedTask signal(data.getNameTask());
    notifySubscribers(signal);
}

} // namespace visualization
} // namespace controller
