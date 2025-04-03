#include "ControllerOperationContext.hpp"

namespace controller {

ControllerOperationContext::ControllerOperationContext(std::shared_ptr<model::ModelContext> modelContext)
    : mModelContext(modelContext)
{
    initOperationControllers();
}

std::shared_ptr<controller::operation::RegisterFamilyUnit> ControllerOperationContext::getControllerRegisterFamilyUnit() const
{
    return mControllerRegisterFamilyUnit;
}

std::shared_ptr<controller::operation::SelectFamilyUnit> ControllerOperationContext::getControllerSelectFamilyUnit() const
{
    return mControllerSelectFamilyUnit;
}

std::shared_ptr<controller::operation::AddUser> ControllerOperationContext::getControllerAddUser() const
{
    return mControllerAddUser;
}

std::shared_ptr<controller::operation::AddTask> ControllerOperationContext::getControllerAddTask() const
{
    return mControllerAddTask;
}

void ControllerOperationContext::initOperationControllers()
{
    mControllerRegisterFamilyUnit = std::make_shared<controller::operation::RegisterFamilyUnit>(mModelContext->getModelFamiliesUnits());
    mControllerSelectFamilyUnit = std::make_shared<controller::operation::SelectFamilyUnit>(mModelContext->getModelFamiliesUnits());
    mControllerAddUser = std::make_shared<controller::operation::AddUser>(mModelContext->getModelFamiliesUnits());
    mControllerAddTask = std::make_shared<controller::operation::AddTask>(mModelContext->getModelFamiliesUnits());
    mControllerSelectUser = std::make_shared<controller::operation::SelectUser>(mModelContext->getModelFamiliesUnits());
    mControllerSelectTask = std::make_shared<controller::operation::SelectTask>(mModelContext->getModelFamiliesUnits());
    mControllerAssignTask = std::make_shared<controller::operation::AssignTask>(mModelContext->getModelFamiliesUnits());
}

std::shared_ptr<controller::operation::AssignTask> ControllerOperationContext::getControllerAssignTask() const
{
    return mControllerAssignTask;
}

std::shared_ptr<controller::operation::SelectTask> ControllerOperationContext::getControllerSelectTask() const
{
    return mControllerSelectTask;
}

std::shared_ptr<controller::operation::SelectUser> ControllerOperationContext::getControllerSelectUser() const
{
    return mControllerSelectUser;
}

} // namespace controller
