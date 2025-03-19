#include "ShowUser.hpp"

namespace controller {
namespace visualization {

ShowUser::ShowUser() {}

void ShowUser::update(const model::signal::AddedUser &data)
{
    controller::visualization::signal::AddedUser signal(data.getNameUser());
    notifySubscribers(signal);
}

} // namespace controller
} // namespace visualization
