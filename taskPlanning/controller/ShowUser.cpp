#include "ShowUser.hpp"

namespace controller {

ShowUser::ShowUser() {}

void ShowUser::update(const model::signal::AddedUser &data)
{
    controller::signal::AddedUser signal(data.getNameUser());
    notifySubscribers(signal);
}

} // namespace controller
