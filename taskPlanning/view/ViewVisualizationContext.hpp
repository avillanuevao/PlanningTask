#pragma once

#include <memory>

#include <controller/ControllerVisualizationContext.hpp>
#include <view/visualization/ShowFamilyUnit.hpp>
#include <view/visualization/ShowUser.hpp>
#include <view/visualization/ShowTask.hpp>

namespace view {

class ViewVisualizationContext
{
public:
    ViewVisualizationContext(std::unique_ptr<controller::ControllerVisualizationContext> controllerVisualizationContext);

    std::shared_ptr<view::visualization::ShowFamilyUnit> getViewShowFamilyUnit() const;
    std::shared_ptr<view::visualization::ShowUser> getViewShowUser() const;
    std::shared_ptr<view::visualization::ShowTask> getViewShowTask() const;

private:
    void initVisualizationViews();
    void initVisualizationRelations();

    std::unique_ptr<controller::ControllerVisualizationContext> mControllerVisualizationContext;

    std::shared_ptr<view::visualization::ShowFamilyUnit> mViewShowFamilyUnit;
    std::shared_ptr<view::visualization::ShowUser> mViewShowUser;
    std::shared_ptr<view::visualization::ShowTask> mViewShowTask;
};

} // namespace view
