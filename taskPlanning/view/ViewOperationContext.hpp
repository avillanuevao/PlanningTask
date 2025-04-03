#pragma once

#include <controller/ControllerOperationContext.hpp>
#include <view/operation/RegisterFamilyUnit.hpp>
#include <view/operation/SelectFamilyUnit.hpp>
#include <view/operation/AddUser.hpp>
#include <view/operation/AddTask.hpp>
#include <view/operation/SelectUser.hpp>
#include <view/operation/SelectTask.hpp>
#include <view/operation/AssignTask.hpp>

namespace view {

class ViewOperationContext
{
public:
    ViewOperationContext(std::unique_ptr<controller::ControllerOperationContext> controllerOperationContext);

    std::shared_ptr<view::operation::RegisterFamilyUnit> getViewRegisterFamilyUnit() const;
    std::shared_ptr<view::operation::SelectFamilyUnit> getViewSelectFamilyUnit() const;
    std::shared_ptr<view::operation::AddUser> getViewAddUser() const;
    std::shared_ptr<view::operation::AddTask> getViewAddTask() const;
    std::shared_ptr<view::operation::SelectUser> getViewSelectUser() const;
    std::shared_ptr<view::operation::SelectTask> getViewSelectTask() const;
    std::shared_ptr<view::operation::AssignTask> getViewAssignTask() const;

private:
    void initOperationViews();

    std::unique_ptr<controller::ControllerOperationContext> mControllerOperationContext;

    std::shared_ptr<view::operation::RegisterFamilyUnit> mViewRegisterFamilyUnit;
    std::shared_ptr<view::operation::SelectFamilyUnit> mViewSelectFamilyUnit;
    std::shared_ptr<view::operation::AddUser> mViewAddUser;
    std::shared_ptr<view::operation::AddTask> mViewAddTask;
    std::shared_ptr<view::operation::SelectUser> mViewSelectUser;
    std::shared_ptr<view::operation::SelectTask> mViewSelectTask;
    std::shared_ptr<view::operation::AssignTask> mViewAssignTask;
};

} // namespace view
