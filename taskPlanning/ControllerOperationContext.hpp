#pragma once

#include <controller/operation/RegisterFamilyUnit.hpp>
#include <controller/operation/SelectFamilyUnit.hpp>
#include <controller/operation/AddUser.hpp>
#include <controller/operation/AddTask.hpp>
#include <ModelContext.hpp>

class ControllerOperationContext
{
public:
    ControllerOperationContext(std::shared_ptr<ModelContext> modelContext);

    std::shared_ptr<controller::operation::RegisterFamilyUnit> getControllerRegisterFamilyUnit() const;
    std::shared_ptr<controller::operation::SelectFamilyUnit> getControllerSelectFamilyUnit() const;
    std::shared_ptr<controller::operation::AddUser> getControllerAddUser() const;
    std::shared_ptr<controller::operation::AddTask> getControllerAddTask() const;

private:
    void initOperationControllers();

    std::shared_ptr<ModelContext> mModelContext;

    std::shared_ptr<controller::operation::RegisterFamilyUnit> mControllerRegisterFamilyUnit;
    std::shared_ptr<controller::operation::SelectFamilyUnit> mControllerSelectFamilyUnit;
    std::shared_ptr<controller::operation::AddUser> mControllerAddUser;
    std::shared_ptr<controller::operation::AddTask> mControllerAddTask;

};
