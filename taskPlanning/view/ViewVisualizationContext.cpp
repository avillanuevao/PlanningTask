#include "ViewVisualizationContext.hpp"

namespace view {

ViewVisualizationContext::ViewVisualizationContext(std::unique_ptr<controller::ControllerVisualizationContext> controllerVisualizationContext)
    : mControllerVisualizationContext(std::move(controllerVisualizationContext))
{
    initVisualizationViews();
    initVisualizationRelations();
}

void ViewVisualizationContext::initVisualizationViews()
{
    mViewShowFamilyUnit = std::make_shared<view::visualization::ShowFamilyUnit>(mControllerVisualizationContext->getControllerShowFamilyUnit());
    mViewShowTask = std::make_shared<view::visualization::ShowTask>(mControllerVisualizationContext->getControllerShowTask());
    mViewShowUser = std::make_shared<view::visualization::ShowUser>(mControllerVisualizationContext->getControllerShowUser());
}

void ViewVisualizationContext::initVisualizationRelations()
{
    mControllerVisualizationContext->getControllerShowFamilyUnit()->addSubscriber(mViewShowFamilyUnit);
    mControllerVisualizationContext->getControllerShowUser()->addSubscriber(mViewShowUser);
    mControllerVisualizationContext->getControllerShowTask()->addSubscriber(mViewShowTask);
}

std::shared_ptr<view::visualization::ShowFamilyUnit> ViewVisualizationContext::getViewShowFamilyUnit() const
{
    return mViewShowFamilyUnit;
}

std::shared_ptr<view::visualization::ShowUser> ViewVisualizationContext::getViewShowUser() const
{
    return mViewShowUser;
}

std::shared_ptr<view::visualization::ShowTask> ViewVisualizationContext::getViewShowTask() const
{
    return mViewShowTask;
}

} // namespace view
