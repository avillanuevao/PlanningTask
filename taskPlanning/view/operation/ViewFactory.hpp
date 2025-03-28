#pragma once

#include <memory>

#include <view/operation/RegisterFamilyUnit.hpp>
#include <view/operation/SelectFamilyUnit.hpp>
#include <view/operation/AddUser.hpp>
#include <view/operation/AddTask.hpp>

namespace view {
namespace operation {

class ViewFactory
{
public:
    ViewFactory();

    // std::shared_ptr<view::operation::RegisterFamilyUnit> createRegisterFamilyUnit(std::unique_ptr<controller::operation::RegisterFamilyUnit> controllerRegisterFamilyUnit);
    // std::shared_ptr<view::operation::SelectFamilyUnit> createSelectFamilyUnit(std::unique_ptr<controller::operation::SelectFamilyUnit> controllerSelectFamilyUnit);
    // std::shared_ptr<view::operation::AddUser> createAddUser(std::unique_ptr<controller::operation::AddUser> controllerAddUser);
    // std::shared_ptr<view::operation::AddTask> createAddTask();
};

} // namespace operation
} // namespace view
