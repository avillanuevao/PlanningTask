#include "ViewOperationContext.hpp"

namespace view {

ViewOperationContext::ViewOperationContext(std::unique_ptr<controller::ControllerOperationContext> controllerOperationContext)
    : mControllerOperationContext(std::move(controllerOperationContext))
{
    initOperationViews();
}

std::shared_ptr<view::operation::RegisterFamilyUnit> ViewOperationContext::getViewRegisterFamilyUnit() const
{
    return mViewRegisterFamilyUnit;
}

std::shared_ptr<view::operation::SelectFamilyUnit> ViewOperationContext::getViewSelectFamilyUnit() const
{
    return mViewSelectFamilyUnit;
}

std::shared_ptr<view::operation::AddUser> ViewOperationContext::getViewAddUser() const
{
    return mViewAddUser;
}

std::shared_ptr<view::operation::AddTask> ViewOperationContext::getViewAddTask() const
{
    return mViewAddTask;
}

void ViewOperationContext::initOperationViews()
{
    mViewRegisterFamilyUnit = std::make_shared<view::operation::RegisterFamilyUnit>(mControllerOperationContext->getControllerRegisterFamilyUnit());
    mViewSelectFamilyUnit = std::make_shared<view::operation::SelectFamilyUnit>(mControllerOperationContext->getControllerSelectFamilyUnit());
    mViewAddUser = std::make_shared<view::operation::AddUser>(mControllerOperationContext->getControllerAddUser());
    mViewAddTask = std::make_shared<view::operation::AddTask>(mControllerOperationContext->getControllerAddTask());
    mViewSelectUser = std::make_shared<view::operation::SelectUser>(mControllerOperationContext->getControllerSelectUser());
    mViewSelectTask = std::make_shared<view::operation::SelectTask>(mControllerOperationContext->getControllerSelectTask());
    mViewAssignTask = std::make_shared<view::operation::AssignTask>(mControllerOperationContext->getControllerAssignTask());
}

std::shared_ptr<view::operation::AssignTask> ViewOperationContext::getViewAssignTask() const
{
    return mViewAssignTask;
}

std::shared_ptr<view::operation::SelectTask> ViewOperationContext::getViewSelectTask() const
{
    return mViewSelectTask;
}

std::shared_ptr<view::operation::SelectUser> ViewOperationContext::getViewSelectUser() const
{
    return mViewSelectUser;
}

} // namespace view
