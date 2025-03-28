#include "ControllerVisualizationContext.hpp"

ControllerVisualizationContext::ControllerVisualizationContext(std::shared_ptr<ModelContext> modelContext)
    : mModelContext(modelContext)
{
    initVisualizationControllers();
    initVisualizationRelations();
}

void ControllerVisualizationContext::initVisualizationControllers()
{
    mControllerShowFamilyUnit = std::make_shared<controller::visualization::ShowFamilyUnit>();
    mControllerShowUser = std::make_shared<controller::visualization::ShowUser>();
    mControllerShowTask = std::make_shared<controller::visualization::ShowTask>();
}

void ControllerVisualizationContext::initVisualizationRelations()
{
    mModelContext->getModelFamiliesUnits()->addSubscriber(mControllerShowFamilyUnit);
    mModelContext->getModelUsers()->addSubscriber(mControllerShowUser);
    mModelContext->getModelTasks()->addSubscriber(mControllerShowTask);
}

std::shared_ptr<controller::visualization::ShowFamilyUnit> ControllerVisualizationContext::getControllerShowFamilyUnit() const
{
    return mControllerShowFamilyUnit;
}

std::shared_ptr<controller::visualization::ShowUser> ControllerVisualizationContext::getControllerShowUser() const
{
    return mControllerShowUser;
}

std::shared_ptr<controller::visualization::ShowTask> ControllerVisualizationContext::getControllerShowTask() const
{
    return mControllerShowTask;
}
