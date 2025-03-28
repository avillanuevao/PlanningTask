#include "ViewFactory.hpp"

namespace view {
namespace visualization {

ViewFactory::ViewFactory() {}

std::shared_ptr<view::visualization::ShowFamilyUnit> ViewFactory::createShowFamilyUnit(std::shared_ptr<controller::visualization::IShowFamilyUnit> controllerShowFamilyUnit)
{
    return std::make_shared<view::visualization::ShowFamilyUnit>(controllerShowFamilyUnit);
}

std::shared_ptr<view::visualization::ShowTask> ViewFactory::createShowTask(std::shared_ptr<controller::visualization::IShowTask> controllerShowTask)
{
    return std::make_shared<view::visualization::ShowTask>(controllerShowTask);
}

std::shared_ptr<view::visualization::ShowUser> ViewFactory::createShowUser(std::shared_ptr<controller::visualization::IShowUser> controllerShowUser)
{
    return std::make_shared<view::visualization::ShowUser>(controllerShowUser);
}

} // namespace visualization
} // namespace view
