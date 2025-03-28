#pragma once

#include <controller/operation/RegisterFamilyUnit.hpp>
#include <controller/operation/SelectFamilyUnit.hpp>
#include <controller/operation/AddUser.hpp>
#include <controller/operation/AddTask.hpp>
#include <controller/operation/SelectUser.hpp>
#include <controller/operation/SelectTask.hpp>
#include <model/ModelContext.hpp>

namespace controller {

class ControllerOperationContext
{
public:
    ControllerOperationContext(std::shared_ptr<model::ModelContext> modelContext);

    std::shared_ptr<controller::operation::RegisterFamilyUnit> getControllerRegisterFamilyUnit() const;
    std::shared_ptr<controller::operation::SelectFamilyUnit> getControllerSelectFamilyUnit() const;
    std::shared_ptr<controller::operation::AddUser> getControllerAddUser() const;
    std::shared_ptr<controller::operation::AddTask> getControllerAddTask() const;
    std::shared_ptr<controller::operation::SelectUser> getControllerSelectUser() const;

    std::shared_ptr<controller::operation::SelectTask> getControllerSelectTask() const;

private:
    void initOperationControllers();

    std::shared_ptr<model::ModelContext> mModelContext;

    std::shared_ptr<controller::operation::RegisterFamilyUnit> mControllerRegisterFamilyUnit;
    std::shared_ptr<controller::operation::SelectFamilyUnit> mControllerSelectFamilyUnit;
    std::shared_ptr<controller::operation::AddUser> mControllerAddUser;
    std::shared_ptr<controller::operation::AddTask> mControllerAddTask;
    std::shared_ptr<controller::operation::SelectUser> mControllerSelectUser;
    std::shared_ptr<controller::operation::SelectTask> mControllerSelectTask;
};

} // namespace controller
