#pragma once

#include <memory>

#include <controller/visualization/IShowFamilyUnit.hpp>
#include <controller/visualization/IShowTask.hpp>
#include <controller/visualization/IShowUser.hpp>
#include <view/visualization/ShowFamilyUnit.hpp>
#include <view/visualization/ShowTask.hpp>
#include <view/visualization/ShowUser.hpp>

namespace view {
namespace visualization {

class ViewFactory
{
public:
    ViewFactory();

    std::shared_ptr<view::visualization::ShowFamilyUnit> createShowFamilyUnit(std::shared_ptr<controller::visualization::IShowFamilyUnit> controllerShowFamilyUnit);
    std::shared_ptr<view::visualization::ShowTask> createShowTask(std::shared_ptr<controller::visualization::IShowTask> controllerShowTask);
    std::shared_ptr<view::visualization::ShowUser> createShowUser(std::shared_ptr<controller::visualization::IShowUser> controllerShowUser);
};

} // namespace visualization
} // namespace view
