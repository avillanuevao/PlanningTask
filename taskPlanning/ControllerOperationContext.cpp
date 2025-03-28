#include "ControllerOperationContext.hpp"

ControllerOperationContext::ControllerOperationContext(std::shared_ptr<ModelContext> modelContext)
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
    mControllerAddUser = std::make_shared<controller::operation::AddUser>(mModelContext->getModelUsers());
    mControllerAddTask = std::make_shared<controller::operation::AddTask>(mModelContext->getModelTasks());

}
