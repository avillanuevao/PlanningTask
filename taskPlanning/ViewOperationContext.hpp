#pragma once

#include <ControllerOperationContext.hpp>
#include <view/operation/RegisterFamilyUnit.hpp>
#include <view/operation/SelectFamilyUnit.hpp>
#include <view/operation/AddUser.hpp>
#include <view/operation/AddTask.hpp>

class ViewOperationContext
{
public:
    ViewOperationContext(std::unique_ptr<ControllerOperationContext> controllerOperationContext);

    std::shared_ptr<view::operation::RegisterFamilyUnit> getViewRegisterFamilyUnit() const;
    std::shared_ptr<view::operation::SelectFamilyUnit> getViewSelectFamilyUnit() const;
    std::shared_ptr<view::operation::AddUser> getViewAddUser() const;
    std::shared_ptr<view::operation::AddTask> getViewAddTask() const;

private:
    void initOperationViews();

    std::unique_ptr<ControllerOperationContext> mControllerOperationContext;

    std::shared_ptr<view::operation::RegisterFamilyUnit> mViewRegisterFamilyUnit;
    std::shared_ptr<view::operation::SelectFamilyUnit> mViewSelectFamilyUnit;
    std::shared_ptr<view::operation::AddUser> mViewAddUser;
    std::shared_ptr<view::operation::AddTask> mViewAddTask;

};
